/* ! \file include/sensor/ati6284/ni/tESeries.h
    * \brief plik nag��wkowy NI
    * Ostatnia modyfikacja: 04.2006 */
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is autogenerated!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef ___tESeries_h___
#define ___tESeries_h___

//!< includes
#ifndef ___nimdbg_tStatus2_h___
#include "tStatus2.h"
#endif

#include "osiBus.h"

class tESeries
{
public:
	//!< ---------------------------------------------------------------------------
	//!< IO Strategies
	//!< ---------------------------------------------------------------------------
	class tReg8IODirect16
	{
	public:
		inline void write(
			tBusSpaceReference addrSpace,
			u32 offset,
			u8 value,
			nMDBG::tStatus2* statusChain = NULL);
		
		inline u8 read(
			tBusSpaceReference addrSpace,
			u32 offset,
			nMDBG::tStatus2* statusChain = NULL);
	};
	
	class tReg16IODirect16
	{
	public:
		inline void write(
			tBusSpaceReference addrSpace,
			u32 offset,
			u16 value,
			nMDBG::tStatus2* statusChain = NULL);
		
		inline u16 read(
			tBusSpaceReference addrSpace,
			u32 offset,
			nMDBG::tStatus2* statusChain = NULL);
	};
	
	//!< ---------------------------------------------------------------------------
	//!< AIAO_Select
	//!< ---------------------------------------------------------------------------
	class tAIAO_Select : public tReg8IODirect16
	{
	public:
		typedef tReg8IODirect16 tIOStrategy;

		enum {
			kOffset = 0x9,
			kId     = 0
		};
		tAIAO_Select();


		typedef enum {
			kRegisterId                          = 0,
			kInputId                             = 1,
			kOutputId                            = 2
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tAIAO_Select& setRegister(u8 value, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u8 value, nMDBG::tStatus2* statusChain = NULL);

		inline void refresh(nMDBG::tStatus2* statusChain = NULL);

		inline u8 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tAIAO_Select& setInput(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getInput(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeInput(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u8 readInput(nMDBG::tStatus2* statusChain = NULL);

		inline tAIAO_Select& setOutput(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getOutput(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeOutput(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u8 readOutput(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u8 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< AIFifoData
	//!< ---------------------------------------------------------------------------
	class tAIFifoData : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x1c,
			kId     = 1
		};
		tAIFifoData();


		typedef enum {
			kRegisterId                          = 0,
			kFrontId                             = 1
		} tId;

		inline tESeries* registerMap(void);

		//!< Register Accessors (Compile-time selectable)
		inline tAIFifoData& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void refresh(nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tAIFifoData& setFront(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getFront(nMDBG::tStatus2* statusChain = NULL) const;

		inline u16 readFront(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< ConfigFifoLow
	//!< ---------------------------------------------------------------------------
	class tConfigFifoLow : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x10,
			kId     = 2
		};
		tConfigFifoLow();


		typedef enum {
			kRegisterId                          = 0,
			kGainId                              = 1,
			kPolarityId                          = 3,
			kDitherId                            = 4,
			kGeneralTriggerId                    = 6,
			kLastChannelId                       = 8
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tConfigFifoLow& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		typedef enum {
			kGain000_5             = 0,
			kGain001_0             = 1,
			kGain002_0             = 2,
			kGain005_0             = 3,
			kGain010_0             = 4,
			kGain020_0             = 5,
			kGain050_0             = 6,
			kGain100_0             = 7,
		} tGain;
		inline tConfigFifoLow& setGain(tGain fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tGain getGain(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeGain(tGain fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tGain readGain(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kPolarityBipolar           = 0,
			kPolarityUnipolar          = 1,
		} tPolarity;
		inline tConfigFifoLow& setPolarity(tPolarity fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tPolarity getPolarity(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writePolarity(tPolarity fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tPolarity readPolarity(nMDBG::tStatus2* statusChain = NULL);

		inline tConfigFifoLow& setDither(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tBoolean getDither(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeDither(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tBoolean readDither(nMDBG::tStatus2* statusChain = NULL);

		inline tConfigFifoLow& setGeneralTrigger(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tBoolean getGeneralTrigger(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeGeneralTrigger(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tBoolean readGeneralTrigger(nMDBG::tStatus2* statusChain = NULL);

		inline tConfigFifoLow& setLastChannel(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tBoolean getLastChannel(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeLastChannel(tBoolean fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tBoolean readLastChannel(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< ConfigFifoHigh
	//!< ---------------------------------------------------------------------------
	class tConfigFifoHigh : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x12,
			kId     = 3
		};
		tConfigFifoHigh();


		typedef enum {
			kRegisterId                          = 0,
			kChannelId                           = 1,
			kBankId                              = 2,
			kChannelTypeId                       = 5
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tConfigFifoHigh& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tConfigFifoHigh& setChannel(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getChannel(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeChannel(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readChannel(nMDBG::tStatus2* statusChain = NULL);

		inline tConfigFifoHigh& setBank(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getBank(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeBank(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readBank(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kChannelTypeCalibration       = 0,
			kChannelTypeDifferential      = 1,
			kChannelTypeNRSE              = 2,
			kChannelTypeRSE               = 3,
			kChannelTypeAux               = 5,
			kChannelTypeGhost             = 7,
		} tChannelType;
		inline tConfigFifoHigh& setChannelType(tChannelType fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tChannelType getChannelType(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeChannelType(tChannelType fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tChannelType readChannelType(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< AO_Config
	//!< ---------------------------------------------------------------------------
	class tAO_Config : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x16,
			kId     = 4
		};
		tAO_Config();


		typedef enum {
			kRegisterId                          = 0,
			kPolarityId                          = 1,
			kReglitchId                          = 2,
			kReferenceId                         = 3,
			kGroundRefId                         = 4,
			kDACSelectId                         = 6
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tAO_Config& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		typedef enum {
			kPolarityBipolar           = 1,
			kPolarityUnipolar          = 0,
		} tPolarity;
		inline tAO_Config& setPolarity(tPolarity fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tPolarity getPolarity(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writePolarity(tPolarity fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tPolarity readPolarity(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kReglitchOn                = 1,
			kReglitchOff               = 0,
		} tReglitch;
		inline tAO_Config& setReglitch(tReglitch fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tReglitch getReglitch(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeReglitch(tReglitch fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tReglitch readReglitch(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kReferenceInternal          = 0,
			kReferenceExternal          = 1,
		} tReference;
		inline tAO_Config& setReference(tReference fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tReference getReference(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeReference(tReference fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tReference readReference(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kGroundRefOn                = 1,
			kGroundRefOff               = 0,
		} tGroundRef;
		inline tAO_Config& setGroundRef(tGroundRef fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tGroundRef getGroundRef(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeGroundRef(tGroundRef fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tGroundRef readGroundRef(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kDACSelectDAC0              = 0,
			kDACSelectDAC1              = 1,
		} tDACSelect;
		inline tAO_Config& setDACSelect(tDACSelect fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tDACSelect getDACSelect(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeDACSelect(tDACSelect fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tDACSelect readDACSelect(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< DAC0_DirectData
	//!< ---------------------------------------------------------------------------
	class tDAC0_DirectData : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x18,
			kId     = 5
		};
		tDAC0_DirectData();


		typedef enum {
			kRegisterId                          = 0,
			kValueId                             = 1
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tDAC0_DirectData& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tDAC0_DirectData& setValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getValue(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readValue(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< DAC1_DirectData
	//!< ---------------------------------------------------------------------------
	class tDAC1_DirectData : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x1a,
			kId     = 6
		};
		tDAC1_DirectData();


		typedef enum {
			kRegisterId                          = 0,
			kValueId                             = 1
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tDAC1_DirectData& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tDAC1_DirectData& setValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getValue(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readValue(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< AO_FIFOData
	//!< ---------------------------------------------------------------------------
	class tAO_FIFOData : public tReg16IODirect16
	{
	public:
		typedef tReg16IODirect16 tIOStrategy;

		enum {
			kOffset = 0x1e,
			kId     = 7
		};
		tAO_FIFOData();


		typedef enum {
			kRegisterId                          = 0,
			kValueId                             = 1
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tAO_FIFOData& setRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u16 value, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tAO_FIFOData& setValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u16 getValue(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeValue(u16 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u16 readValue(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u16 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< SerialCommandRegister
	//!< ---------------------------------------------------------------------------
	class tSerialCommandRegister : public tReg8IODirect16
	{
	public:
		typedef tReg8IODirect16 tIOStrategy;

		enum {
			kOffset = 0xd,
			kId     = 8
		};
		tSerialCommandRegister();


		typedef enum {
			kRegisterId                          = 0,
			kSerialClockId                       = 1,
			kSerialDataId                        = 2,
			kEEPromChipSelectId                  = 3,
			kSerialDacLoadNumId                  = 4
		} tId;

		inline tESeries* registerMap(void);

		inline void flushBus(nMDBG::tStatus2* statusChain = NULL);

		//!< Register Accessors (Compile-time selectable)
		inline tSerialCommandRegister& setRegister(u8 value, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void flush(nMDBG::tStatus2* statusChain = NULL);

		inline void writeRegister(u8 value, nMDBG::tStatus2* statusChain = NULL);

		inline u8 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		typedef enum {
			kSerialClockLow               = 0,
			kSerialClockHigh              = 1,
		} tSerialClock;
		inline tSerialCommandRegister& setSerialClock(tSerialClock fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tSerialClock getSerialClock(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeSerialClock(tSerialClock fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tSerialClock readSerialClock(nMDBG::tStatus2* statusChain = NULL);

		inline tSerialCommandRegister& setSerialData(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getSerialData(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeSerialData(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u8 readSerialData(nMDBG::tStatus2* statusChain = NULL);

		typedef enum {
			kEEPromChipSelectLow               = 0,
			kEEPromChipSelectHigh              = 1,
		} tEEPromChipSelect;
		inline tSerialCommandRegister& setEEPromChipSelect(tEEPromChipSelect fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline tEEPromChipSelect getEEPromChipSelect(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeEEPromChipSelect(tEEPromChipSelect fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline tEEPromChipSelect readEEPromChipSelect(nMDBG::tStatus2* statusChain = NULL);

		inline tSerialCommandRegister& setSerialDacLoadNum(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getSerialDacLoadNum(nMDBG::tStatus2* statusChain = NULL) const;

		inline void writeSerialDacLoadNum(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);

		inline u8 readSerialDacLoadNum(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u8 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< SerialStatus
	//!< ---------------------------------------------------------------------------
	class tSerialStatus : public tReg8IODirect16
	{
	public:
		typedef tReg8IODirect16 tIOStrategy;

		enum {
			kOffset = 0x1,
			kId     = 9
		};
		tSerialStatus();


		typedef enum {
			kRegisterId                          = 0,
			kEEPROMOutId                         = 1
		} tId;

		inline tESeries* registerMap(void);

		//!< Register Accessors (Compile-time selectable)
		inline tSerialStatus& setRegister(u8 value, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getRegister(nMDBG::tStatus2* statusChain = NULL) const;

		inline void refresh(nMDBG::tStatus2* statusChain = NULL);

		inline u8 readRegister(nMDBG::tStatus2* statusChain = NULL);

		//!< Field Accessors (Compile-time selectable)
		inline tSerialStatus& setEEPROMOut(u8 fieldValue, nMDBG::tStatus2* statusChain = NULL);
		inline u8 getEEPROMOut(nMDBG::tStatus2* statusChain = NULL) const;

		inline u8 readEEPROMOut(nMDBG::tStatus2* statusChain = NULL);

		//!< Run-time selectable Register/Field Accessors
	private:
		u8 _softCopy;

		inline void setRegisterMap(tESeries* pESeries);
		tESeries* _ESeries;

		friend class tESeries;

	};

	//!< ---------------------------------------------------------------------------
	//!< AIAO_Select
	//!< ---------------------------------------------------------------------------
	tAIAO_Select AIAO_Select;

	//!< ---------------------------------------------------------------------------
	//!< AIFifoData
	//!< ---------------------------------------------------------------------------
	tAIFifoData AIFifoData;

	//!< ---------------------------------------------------------------------------
	//!< ConfigFifoLow
	//!< ---------------------------------------------------------------------------
	tConfigFifoLow ConfigFifoLow;

	//!< ---------------------------------------------------------------------------
	//!< ConfigFifoHigh
	//!< ---------------------------------------------------------------------------
	tConfigFifoHigh ConfigFifoHigh;

	//!< ---------------------------------------------------------------------------
	//!< AO_Config
	//!< ---------------------------------------------------------------------------
	tAO_Config AO_Config;

	//!< ---------------------------------------------------------------------------
	//!< DAC0_DirectData
	//!< ---------------------------------------------------------------------------
	tDAC0_DirectData DAC0_DirectData;

	//!< ---------------------------------------------------------------------------
	//!< DAC1_DirectData
	//!< ---------------------------------------------------------------------------
	tDAC1_DirectData DAC1_DirectData;

	//!< ---------------------------------------------------------------------------
	//!< AO_FIFOData
	//!< ---------------------------------------------------------------------------
	tAO_FIFOData AO_FIFOData;

	//!< ---------------------------------------------------------------------------
	//!< SerialCommandRegister
	//!< ---------------------------------------------------------------------------
	tSerialCommandRegister SerialCommandRegister;

	//!< ---------------------------------------------------------------------------
	//!< SerialStatus
	//!< ---------------------------------------------------------------------------
	tSerialStatus SerialStatus;

	//!< ---------------------------------------------------------------------------
	//!< Register Groups
	//!< ---------------------------------------------------------------------------

	//!< ----------------------------------------
	//!< Register/Field Ids
	//!< ----------------------------------------
	typedef enum {
		kAIAO_SelectId                       = 0,
		kInputId                             = tAIAO_Select::kInputId << 27 | kAIAO_SelectId,
		kOutputId                            = tAIAO_Select::kOutputId << 27 | kAIAO_SelectId,

		kAIFifoDataId                        = 1,
		kFrontId                             = tAIFifoData::kFrontId << 27 | kAIFifoDataId,

		kConfigFifoLowId                     = 2,
		kGainId                              = tConfigFifoLow::kGainId << 27 | kConfigFifoLowId,
		kPolarityId                          = tConfigFifoLow::kPolarityId << 27 | kConfigFifoLowId,
		kDitherId                            = tConfigFifoLow::kDitherId << 27 | kConfigFifoLowId,
		kGeneralTriggerId                    = tConfigFifoLow::kGeneralTriggerId << 27 | kConfigFifoLowId,
		kLastChannelId                       = tConfigFifoLow::kLastChannelId << 27 | kConfigFifoLowId,

		kConfigFifoHighId                    = 3,
		kChannelId                           = tConfigFifoHigh::kChannelId << 27 | kConfigFifoHighId,
		kBankId                              = tConfigFifoHigh::kBankId << 27 | kConfigFifoHighId,
		kChannelTypeId                       = tConfigFifoHigh::kChannelTypeId << 27 | kConfigFifoHighId,

		kAO_ConfigId                         = 4,
		kAO_ConfigPolarityId                          = tAO_Config::kPolarityId << 27 | kAO_ConfigId,
		kReglitchId                          = tAO_Config::kReglitchId << 27 | kAO_ConfigId,
		kReferenceId                         = tAO_Config::kReferenceId << 27 | kAO_ConfigId,
		kGroundRefId                         = tAO_Config::kGroundRefId << 27 | kAO_ConfigId,
		kDACSelectId                         = tAO_Config::kDACSelectId << 27 | kAO_ConfigId,

		kDAC0_DirectDataId                   = 5,
		kDAC0_DirectDataValueId                             = tDAC0_DirectData::kValueId << 27 | kDAC0_DirectDataId,

		kDAC1_DirectDataId                   = 6,
		kDAC1_DirectDataValueId                             = tDAC1_DirectData::kValueId << 27 | kDAC1_DirectDataId,

		kAO_FIFODataId                       = 7,
		kAO_FIFODataValueId                             = tAO_FIFOData::kValueId << 27 | kAO_FIFODataId,

		kSerialCommandRegisterId             = 8,
		kSerialClockId                       = tSerialCommandRegister::kSerialClockId << 27 | kSerialCommandRegisterId,
		kSerialDataId                        = tSerialCommandRegister::kSerialDataId << 27 | kSerialCommandRegisterId,
		kEEPromChipSelectId                  = tSerialCommandRegister::kEEPromChipSelectId << 27 | kSerialCommandRegisterId,
		kSerialDacLoadNumId                  = tSerialCommandRegister::kSerialDacLoadNumId << 27 | kSerialCommandRegisterId,

		kSerialStatusId                      = 9,
		kEEPROMOutId                         = tSerialStatus::kEEPROMOutId << 27 | kSerialStatusId,


		kMaxRegisterId = 9

	} tId;

	tESeries(tBusSpaceReference addrSpace, nMDBG::tStatus2* statusChain = NULL);
	void reset(nMDBG::tStatus2* statusChain = NULL);
	virtual ~tESeries();

	inline tBusSpaceReference getBusSpaceReference(void) const;

	inline void setAddressOffset(u32 value, nMDBG::tStatus2* statusChain = NULL);
	inline u32  getAddressOffset(nMDBG::tStatus2* statusChain = NULL);
	inline void flushBus(nMDBG::tStatus2* statusChain = NULL);
private:
	void _initialize(nMDBG::tStatus2* statusChain = NULL);
	tBusSpaceReference _addrSpace;
	tBoolean _deallocateBus;
	u32 _addressOffset;

};

#ifndef ___tESeries_ipp___
#ifndef ___tESeries_h_no_inline___
#include "tESeries.ipp"
#endif

#endif

#endif


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is autogenerated!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!

