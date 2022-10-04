#include <Il2CppModLoader/app/types/ByRefNewInstruction.h>
#include <Il2CppModLoader/app/types/DupInstruction.h>
#include <Il2CppModLoader/app/types/LoadCachedObjectInstruction.h>
#include <Il2CppModLoader/app/types/LoadObjectInstruction.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloDouble.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloInt32.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloInt64.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloSingle.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloUInt16.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloUInt32.h>
#include <Il2CppModLoader/app/types/ModuloInstruction_ModuloUInt64.h>
#include <Il2CppModLoader/app/types/MulInstruction.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulDouble.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulInt16.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulInt32.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulInt64.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulSingle.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulUInt16.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulUInt32.h>
#include <Il2CppModLoader/app/types/MulInstruction_MulUInt64.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfInt16.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfInt32.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfInt64.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfUInt16.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfUInt32.h>
#include <Il2CppModLoader/app/types/MulOvfInstruction_MulOvfUInt64.h>
#include <Il2CppModLoader/app/types/NegateCheckedInstruction.h>
#include <Il2CppModLoader/app/types/NegateCheckedInstruction_NegateCheckedInt16.h>
#include <Il2CppModLoader/app/types/NegateCheckedInstruction_NegateCheckedInt32.h>
#include <Il2CppModLoader/app/types/NegateCheckedInstruction_NegateCheckedInt64.h>
#include <Il2CppModLoader/app/types/NegateInstruction.h>
#include <Il2CppModLoader/app/types/NegateInstruction_NegateDouble.h>
#include <Il2CppModLoader/app/types/NegateInstruction_NegateInt16.h>
#include <Il2CppModLoader/app/types/NegateInstruction_NegateInt32.h>
#include <Il2CppModLoader/app/types/NegateInstruction_NegateInt64.h>
#include <Il2CppModLoader/app/types/NegateInstruction_NegateSingle.h>
#include <Il2CppModLoader/app/types/NewInstruction.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualBoolean.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualByte.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualByteLiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualChar.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualCharLiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualDouble.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualDoubleLiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt16.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt16LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt32.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt32LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt64.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualInt64LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualReference.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualSByte.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualSByteLiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualSingle.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualSingleLiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt16.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt16LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt32.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt32LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt64.h>
#include <Il2CppModLoader/app/types/NotEqualInstruction_NotEqualUInt64LiftedToNull.h>
#include <Il2CppModLoader/app/types/NotInstruction.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotBoolean.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotByte.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotInt16.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotInt32.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotInt64.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotSByte.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotUInt16.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotUInt32.h>
#include <Il2CppModLoader/app/types/NotInstruction_NotUInt64.h>
#include <Il2CppModLoader/app/types/NullCheckInstruction.h>
#include <Il2CppModLoader/app/types/NumericConvertInstruction_Checked.h>
#include <Il2CppModLoader/app/types/NumericConvertInstruction_ToUnderlying.h>
#include <Il2CppModLoader/app/types/NumericConvertInstruction_Unchecked.h>
#include <Il2CppModLoader/app/types/OrInstruction.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrBoolean.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrByte.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrInt16.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrInt32.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrInt64.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrSByte.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrUInt16.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrUInt32.h>
#include <Il2CppModLoader/app/types/OrInstruction_OrUInt64.h>
#include <Il2CppModLoader/app/types/PopInstruction.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftByte.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftInt16.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftInt32.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftInt64.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftSByte.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftUInt16.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftUInt32.h>
#include <Il2CppModLoader/app/types/RightShiftInstruction_RightShiftUInt64.h>
#include <Il2CppModLoader/app/types/RuntimeVariables.h>
#include <Il2CppModLoader/app/types/SubInstruction.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubInt16.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloInt32__Class** type_info = (::app::ModuloInstruction_ModuloInt32__Class**)(modloader::win::memory::resolve_rva(0x0471A228));
    }
    namespace ModuloInstruction_ModuloInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloInt64__Class** type_info = (::app::ModuloInstruction_ModuloInt64__Class**)(modloader::win::memory::resolve_rva(0x0473E4F8));
    }
    namespace ModuloInstruction_ModuloUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloUInt16__Class** type_info = (::app::ModuloInstruction_ModuloUInt16__Class**)(modloader::win::memory::resolve_rva(0x047647C0));
    }
    namespace ModuloInstruction_ModuloUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloUInt32__Class** type_info = (::app::ModuloInstruction_ModuloUInt32__Class**)(modloader::win::memory::resolve_rva(0x04741038));
    }
    namespace ModuloInstruction_ModuloUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloUInt64__Class** type_info = (::app::ModuloInstruction_ModuloUInt64__Class**)(modloader::win::memory::resolve_rva(0x04746650));
    }
    namespace ModuloInstruction_ModuloSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloSingle__Class** type_info = (::app::ModuloInstruction_ModuloSingle__Class**)(modloader::win::memory::resolve_rva(0x0471CD20));
    }
    namespace ModuloInstruction_ModuloDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModuloInstruction_ModuloDouble__Class** type_info = (::app::ModuloInstruction_ModuloDouble__Class**)(modloader::win::memory::resolve_rva(0x04715AA8));
    }
    namespace MulInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction__Class** type_info = (::app::MulInstruction__Class**)(modloader::win::memory::resolve_rva(0x04756578));
    }
    namespace MulInstruction_MulInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulInt16__Class** type_info = (::app::MulInstruction_MulInt16__Class**)(modloader::win::memory::resolve_rva(0x04709EB0));
    }
    namespace MulInstruction_MulInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulInt32__Class** type_info = (::app::MulInstruction_MulInt32__Class**)(modloader::win::memory::resolve_rva(0x04715820));
    }
    namespace MulInstruction_MulInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulInt64__Class** type_info = (::app::MulInstruction_MulInt64__Class**)(modloader::win::memory::resolve_rva(0x04719810));
    }
    namespace MulInstruction_MulUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulUInt16__Class** type_info = (::app::MulInstruction_MulUInt16__Class**)(modloader::win::memory::resolve_rva(0x0470AEB0));
    }
    namespace MulInstruction_MulUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulUInt32__Class** type_info = (::app::MulInstruction_MulUInt32__Class**)(modloader::win::memory::resolve_rva(0x04791308));
    }
    namespace MulInstruction_MulUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulUInt64__Class** type_info = (::app::MulInstruction_MulUInt64__Class**)(modloader::win::memory::resolve_rva(0x0474CC50));
    }
    namespace MulInstruction_MulSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulSingle__Class** type_info = (::app::MulInstruction_MulSingle__Class**)(modloader::win::memory::resolve_rva(0x0476C1C8));
    }
    namespace MulInstruction_MulDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulInstruction_MulDouble__Class** type_info = (::app::MulInstruction_MulDouble__Class**)(modloader::win::memory::resolve_rva(0x047941D8));
    }
    namespace MulOvfInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction__Class** type_info = (::app::MulOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470B670));
    }
    namespace MulOvfInstruction_MulOvfInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfInt16__Class** type_info = (::app::MulOvfInstruction_MulOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x0471D5E8));
    }
    namespace MulOvfInstruction_MulOvfInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfInt32__Class** type_info = (::app::MulOvfInstruction_MulOvfInt32__Class**)(modloader::win::memory::resolve_rva(0x0478F3F0));
    }
    namespace MulOvfInstruction_MulOvfInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfInt64__Class** type_info = (::app::MulOvfInstruction_MulOvfInt64__Class**)(modloader::win::memory::resolve_rva(0x047782D0));
    }
    namespace MulOvfInstruction_MulOvfUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfUInt16__Class** type_info = (::app::MulOvfInstruction_MulOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x04787878));
    }
    namespace MulOvfInstruction_MulOvfUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfUInt32__Class** type_info = (::app::MulOvfInstruction_MulOvfUInt32__Class**)(modloader::win::memory::resolve_rva(0x0475DDF0));
    }
    namespace MulOvfInstruction_MulOvfUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulOvfInstruction_MulOvfUInt64__Class** type_info = (::app::MulOvfInstruction_MulOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x047760B0));
    }
    namespace NegateInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction__Class** type_info = (::app::NegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778010));
    }
    namespace NegateInstruction_NegateInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction_NegateInt16__Class** type_info = (::app::NegateInstruction_NegateInt16__Class**)(modloader::win::memory::resolve_rva(0x04789F20));
    }
    namespace NegateInstruction_NegateInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction_NegateInt32__Class** type_info = (::app::NegateInstruction_NegateInt32__Class**)(modloader::win::memory::resolve_rva(0x04763570));
    }
    namespace NegateInstruction_NegateInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction_NegateInt64__Class** type_info = (::app::NegateInstruction_NegateInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CA88));
    }
    namespace NegateInstruction_NegateSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction_NegateSingle__Class** type_info = (::app::NegateInstruction_NegateSingle__Class**)(modloader::win::memory::resolve_rva(0x047163D0));
    }
    namespace NegateInstruction_NegateDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateInstruction_NegateDouble__Class** type_info = (::app::NegateInstruction_NegateDouble__Class**)(modloader::win::memory::resolve_rva(0x0476C0C8));
    }
    namespace NegateCheckedInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateCheckedInstruction__Class** type_info = (::app::NegateCheckedInstruction__Class**)(modloader::win::memory::resolve_rva(0x047993D0));
    }
    namespace NegateCheckedInstruction_NegateCheckedInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateCheckedInstruction_NegateCheckedInt32__Class** type_info = (::app::NegateCheckedInstruction_NegateCheckedInt32__Class**)(modloader::win::memory::resolve_rva(0x047247D8));
    }
    namespace NegateCheckedInstruction_NegateCheckedInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateCheckedInstruction_NegateCheckedInt16__Class** type_info = (::app::NegateCheckedInstruction_NegateCheckedInt16__Class**)(modloader::win::memory::resolve_rva(0x0470C310));
    }
    namespace NegateCheckedInstruction_NegateCheckedInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegateCheckedInstruction_NegateCheckedInt64__Class** type_info = (::app::NegateCheckedInstruction_NegateCheckedInt64__Class**)(modloader::win::memory::resolve_rva(0x04715B20));
    }
    namespace NewInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewInstruction__Class** type_info = (::app::NewInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478FD78));
    }
    namespace ByRefNewInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByRefNewInstruction__Class** type_info = (::app::ByRefNewInstruction__Class**)(modloader::win::memory::resolve_rva(0x0474ED28));
    }
    namespace NotEqualInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction__Class** type_info = (::app::NotEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x04727E88));
    }
    namespace NotEqualInstruction_NotEqualBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualBoolean__Class** type_info = (::app::NotEqualInstruction_NotEqualBoolean__Class**)(modloader::win::memory::resolve_rva(0x04780840));
    }
    namespace NotEqualInstruction_NotEqualSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualSByte__Class** type_info = (::app::NotEqualInstruction_NotEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x04778A60));
    }
    namespace NotEqualInstruction_NotEqualInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt16__Class** type_info = (::app::NotEqualInstruction_NotEqualInt16__Class**)(modloader::win::memory::resolve_rva(0x0470DBE0));
    }
    namespace NotEqualInstruction_NotEqualChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualChar__Class** type_info = (::app::NotEqualInstruction_NotEqualChar__Class**)(modloader::win::memory::resolve_rva(0x0475AEE0));
    }
    namespace NotEqualInstruction_NotEqualInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt32__Class** type_info = (::app::NotEqualInstruction_NotEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0474D580));
    }
    namespace NotEqualInstruction_NotEqualInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt64__Class** type_info = (::app::NotEqualInstruction_NotEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x0473DA40));
    }
    namespace NotEqualInstruction_NotEqualByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualByte__Class** type_info = (::app::NotEqualInstruction_NotEqualByte__Class**)(modloader::win::memory::resolve_rva(0x04725620));
    }
    namespace NotEqualInstruction_NotEqualUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt16__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04715F88));
    }
    namespace NotEqualInstruction_NotEqualUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt32__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04772E00));
    }
    namespace NotEqualInstruction_NotEqualUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt64__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0475AB50));
    }
    namespace NotEqualInstruction_NotEqualSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualSingle__Class** type_info = (::app::NotEqualInstruction_NotEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0478DFB0));
    }
    namespace NotEqualInstruction_NotEqualDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualDouble__Class** type_info = (::app::NotEqualInstruction_NotEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x04756D58));
    }
    namespace NotEqualInstruction_NotEqualReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualReference__Class** type_info = (::app::NotEqualInstruction_NotEqualReference__Class**)(modloader::win::memory::resolve_rva(0x0471B220));
    }
    namespace NotEqualInstruction_NotEqualSByteLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760660));
    }
    namespace NotEqualInstruction_NotEqualInt16LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt16LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047369B0));
    }
    namespace NotEqualInstruction_NotEqualCharLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualCharLiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualCharLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047907E0));
    }
    namespace NotEqualInstruction_NotEqualInt32LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04786080));
    }
    namespace NotEqualInstruction_NotEqualInt64LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0471ACB0));
    }
    namespace NotEqualInstruction_NotEqualByteLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualByteLiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04722CB0));
    }
    namespace NotEqualInstruction_NotEqualUInt16LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04718F48));
    }
    namespace NotEqualInstruction_NotEqualUInt32LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04782670));
    }
    namespace NotEqualInstruction_NotEqualUInt64LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualUInt64LiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualUInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0472FB80));
    }
    namespace NotEqualInstruction_NotEqualSingleLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760778));
    }
    namespace NotEqualInstruction_NotEqualDoubleLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class** type_info = (::app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04778CD8));
    }
    namespace NotInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction__Class** type_info = (::app::NotInstruction__Class**)(modloader::win::memory::resolve_rva(0x047652C8));
    }
    namespace NotInstruction_NotBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotBoolean__Class** type_info = (::app::NotInstruction_NotBoolean__Class**)(modloader::win::memory::resolve_rva(0x0472AEB0));
    }
    namespace NotInstruction_NotInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotInt64__Class** type_info = (::app::NotInstruction_NotInt64__Class**)(modloader::win::memory::resolve_rva(0x0478CAA8));
    }
    namespace NotInstruction_NotInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotInt32__Class** type_info = (::app::NotInstruction_NotInt32__Class**)(modloader::win::memory::resolve_rva(0x04749440));
    }
    namespace NotInstruction_NotInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotInt16__Class** type_info = (::app::NotInstruction_NotInt16__Class**)(modloader::win::memory::resolve_rva(0x0470B9A8));
    }
    namespace NotInstruction_NotUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotUInt64__Class** type_info = (::app::NotInstruction_NotUInt64__Class**)(modloader::win::memory::resolve_rva(0x04769D30));
    }
    namespace NotInstruction_NotUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotUInt32__Class** type_info = (::app::NotInstruction_NotUInt32__Class**)(modloader::win::memory::resolve_rva(0x0474D990));
    }
    namespace NotInstruction_NotUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotUInt16__Class** type_info = (::app::NotInstruction_NotUInt16__Class**)(modloader::win::memory::resolve_rva(0x04780E90));
    }
    namespace NotInstruction_NotByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotByte__Class** type_info = (::app::NotInstruction_NotByte__Class**)(modloader::win::memory::resolve_rva(0x04742E30));
    }
    namespace NotInstruction_NotSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotInstruction_NotSByte__Class** type_info = (::app::NotInstruction_NotSByte__Class**)(modloader::win::memory::resolve_rva(0x04745BB8));
    }
    namespace NullCheckInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NullCheckInstruction__Class** type_info = (::app::NullCheckInstruction__Class**)(modloader::win::memory::resolve_rva(0x04752758));
    }
    namespace NumericConvertInstruction_Unchecked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NumericConvertInstruction_Unchecked__Class** type_info = (::app::NumericConvertInstruction_Unchecked__Class**)(modloader::win::memory::resolve_rva(0x04781148));
    }
    namespace NumericConvertInstruction_Checked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NumericConvertInstruction_Checked__Class** type_info = (::app::NumericConvertInstruction_Checked__Class**)(modloader::win::memory::resolve_rva(0x0474B608));
    }
    namespace NumericConvertInstruction_ToUnderlying {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NumericConvertInstruction_ToUnderlying__Class** type_info = (::app::NumericConvertInstruction_ToUnderlying__Class**)(modloader::win::memory::resolve_rva(0x04766380));
    }
    namespace OrInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction__Class** type_info = (::app::OrInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731EB8));
    }
    namespace OrInstruction_OrSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrSByte__Class** type_info = (::app::OrInstruction_OrSByte__Class**)(modloader::win::memory::resolve_rva(0x04782FE0));
    }
    namespace OrInstruction_OrInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrInt16__Class** type_info = (::app::OrInstruction_OrInt16__Class**)(modloader::win::memory::resolve_rva(0x047482B0));
    }
    namespace OrInstruction_OrInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrInt32__Class** type_info = (::app::OrInstruction_OrInt32__Class**)(modloader::win::memory::resolve_rva(0x04789308));
    }
    namespace OrInstruction_OrInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrInt64__Class** type_info = (::app::OrInstruction_OrInt64__Class**)(modloader::win::memory::resolve_rva(0x047387A0));
    }
    namespace OrInstruction_OrByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrByte__Class** type_info = (::app::OrInstruction_OrByte__Class**)(modloader::win::memory::resolve_rva(0x0471E488));
    }
    namespace OrInstruction_OrUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrUInt16__Class** type_info = (::app::OrInstruction_OrUInt16__Class**)(modloader::win::memory::resolve_rva(0x047843E0));
    }
    namespace OrInstruction_OrUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrUInt32__Class** type_info = (::app::OrInstruction_OrUInt32__Class**)(modloader::win::memory::resolve_rva(0x04718C00));
    }
    namespace OrInstruction_OrUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrUInt64__Class** type_info = (::app::OrInstruction_OrUInt64__Class**)(modloader::win::memory::resolve_rva(0x04715C40));
    }
    namespace OrInstruction_OrBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrInstruction_OrBoolean__Class** type_info = (::app::OrInstruction_OrBoolean__Class**)(modloader::win::memory::resolve_rva(0x047438F8));
    }
    namespace RightShiftInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction__Class** type_info = (::app::RightShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x0477D658));
    }
    namespace RightShiftInstruction_RightShiftSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftSByte__Class** type_info = (::app::RightShiftInstruction_RightShiftSByte__Class**)(modloader::win::memory::resolve_rva(0x04754B98));
    }
    namespace RightShiftInstruction_RightShiftInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftInt16__Class** type_info = (::app::RightShiftInstruction_RightShiftInt16__Class**)(modloader::win::memory::resolve_rva(0x047393B0));
    }
    namespace RightShiftInstruction_RightShiftInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftInt32__Class** type_info = (::app::RightShiftInstruction_RightShiftInt32__Class**)(modloader::win::memory::resolve_rva(0x04735EC0));
    }
    namespace RightShiftInstruction_RightShiftInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftInt64__Class** type_info = (::app::RightShiftInstruction_RightShiftInt64__Class**)(modloader::win::memory::resolve_rva(0x04761F88));
    }
    namespace RightShiftInstruction_RightShiftByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftByte__Class** type_info = (::app::RightShiftInstruction_RightShiftByte__Class**)(modloader::win::memory::resolve_rva(0x04725630));
    }
    namespace RightShiftInstruction_RightShiftUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftUInt16__Class** type_info = (::app::RightShiftInstruction_RightShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0474EAF0));
    }
    namespace RightShiftInstruction_RightShiftUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftUInt32__Class** type_info = (::app::RightShiftInstruction_RightShiftUInt32__Class**)(modloader::win::memory::resolve_rva(0x047018C0));
    }
    namespace RightShiftInstruction_RightShiftUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RightShiftInstruction_RightShiftUInt64__Class** type_info = (::app::RightShiftInstruction_RightShiftUInt64__Class**)(modloader::win::memory::resolve_rva(0x04707150));
    }
    namespace RuntimeVariables {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeVariables__Class** type_info = (::app::RuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x0474F1F8));
    }
    namespace LoadObjectInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadObjectInstruction__Class** type_info = (::app::LoadObjectInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722720));
    }
    namespace LoadCachedObjectInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadCachedObjectInstruction__Class** type_info = (::app::LoadCachedObjectInstruction__Class**)(modloader::win::memory::resolve_rva(0x04738020));
    }
    namespace PopInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PopInstruction__Class** type_info = (::app::PopInstruction__Class**)(modloader::win::memory::resolve_rva(0x04709228));
    }
    namespace DupInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DupInstruction__Class** type_info = (::app::DupInstruction__Class**)(modloader::win::memory::resolve_rva(0x047652D0));
    }
    namespace SubInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction__Class** type_info = (::app::SubInstruction__Class**)(modloader::win::memory::resolve_rva(0x047090A0));
    }
    namespace SubInstruction_SubInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubInt16__Class** type_info = (::app::SubInstruction_SubInt16__Class**)(modloader::win::memory::resolve_rva(0x04719718));
    }
} // namespace app::classes::types
