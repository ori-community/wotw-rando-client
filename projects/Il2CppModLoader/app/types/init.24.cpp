#include <Il2CppModLoader/app/types/AndInstruction_AndBoolean.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndUInt32.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndUInt64.h>
#include <Il2CppModLoader/app/types/ArrayLengthInstruction.h>
#include <Il2CppModLoader/app/types/BranchFalseInstruction.h>
#include <Il2CppModLoader/app/types/BranchInstruction.h>
#include <Il2CppModLoader/app/types/BranchLabel.h>
#include <Il2CppModLoader/app/types/BranchTrueInstruction.h>
#include <Il2CppModLoader/app/types/ByRefMethodInfoCallInstruction.h>
#include <Il2CppModLoader/app/types/CoalescingBranchInstruction.h>
#include <Il2CppModLoader/app/types/DecrementInstruction.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementDouble.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementInt16.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementInt32.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementInt64.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementSingle.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementUInt16.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementUInt32.h>
#include <Il2CppModLoader/app/types/DecrementInstruction_DecrementUInt64.h>
#include <Il2CppModLoader/app/types/DefaultValueInstruction.h>
#include <Il2CppModLoader/app/types/DivInstruction.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivDouble.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivInt16.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivInt32.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivInt64.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivSingle.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivUInt16.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivUInt32.h>
#include <Il2CppModLoader/app/types/DivInstruction_DivUInt64.h>
#include <Il2CppModLoader/app/types/EnterExceptionFilterInstruction.h>
#include <Il2CppModLoader/app/types/EnterExceptionHandlerInstruction.h>
#include <Il2CppModLoader/app/types/EnterFaultInstruction.h>
#include <Il2CppModLoader/app/types/EnterFaultInstruction__Array.h>
#include <Il2CppModLoader/app/types/EnterFinallyInstruction.h>
#include <Il2CppModLoader/app/types/EnterFinallyInstruction__Array.h>
#include <Il2CppModLoader/app/types/EnterTryCatchFinallyInstruction.h>
#include <Il2CppModLoader/app/types/EnterTryFaultInstruction.h>
#include <Il2CppModLoader/app/types/EqualInstruction.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualBoolean.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualBooleanLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualByte.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualByteLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualChar.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualCharLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualDouble.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualDoubleLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt16.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt16LiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt32.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt32LiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt64.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualInt64LiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualReference.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualSByte.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualSByteLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualSingle.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualSingleLiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt16.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt16LiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt32.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt32LiftedToNull.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt64.h>
#include <Il2CppModLoader/app/types/EqualInstruction_EqualUInt64LiftedToNull.h>
#include <Il2CppModLoader/app/types/ExceptionFilter.h>
#include <Il2CppModLoader/app/types/ExceptionHandler.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrByte.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrInt16.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrInt32.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrInt64.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrSByte.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrUInt16.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrUInt32.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrUInt64.h>
#include <Il2CppModLoader/app/types/GetArrayItemInstruction.h>
#include <Il2CppModLoader/app/types/GotoInstruction.h>
#include <Il2CppModLoader/app/types/GotoInstruction__Array.h>
#include <Il2CppModLoader/app/types/InstructionList.h>
#include <Il2CppModLoader/app/types/Instruction__Array__Array.h>
#include <Il2CppModLoader/app/types/Instruction__Array__Array__Array.h>
#include <Il2CppModLoader/app/types/LeaveExceptionFilterInstruction.h>
#include <Il2CppModLoader/app/types/LeaveExceptionHandlerInstruction.h>
#include <Il2CppModLoader/app/types/LeaveExceptionHandlerInstruction__Array.h>
#include <Il2CppModLoader/app/types/LeaveFaultInstruction.h>
#include <Il2CppModLoader/app/types/LeaveFinallyInstruction.h>
#include <Il2CppModLoader/app/types/LightDelegateCreator.h>
#include <Il2CppModLoader/app/types/LightLambda.h>
#include <Il2CppModLoader/app/types/LocalVariables.h>
#include <Il2CppModLoader/app/types/LocalVariables_VariableScope.h>
#include <Il2CppModLoader/app/types/MethodInfoCallInstruction.h>
#include <Il2CppModLoader/app/types/NewArrayBoundsInstruction.h>
#include <Il2CppModLoader/app/types/NewArrayInitInstruction.h>
#include <Il2CppModLoader/app/types/NewArrayInstruction.h>
#include <Il2CppModLoader/app/types/OffsetInstruction.h>
#include <Il2CppModLoader/app/types/ParameterByRefUpdater.h>
#include <Il2CppModLoader/app/types/SetArrayItemInstruction.h>
#include <Il2CppModLoader/app/types/StringSwitchInstruction.h>
#include <Il2CppModLoader/app/types/ThrowInstruction.h>
#include <Il2CppModLoader/app/types/TryCatchFinallyHandler.h>
#include <Il2CppModLoader/app/types/TryFaultHandler.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndUInt32__Class** type_info = (::app::AndInstruction_AndUInt32__Class**)(modloader::win::memory::resolve_rva(0x04774FD8));
    }
    namespace AndInstruction_AndUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndUInt64__Class** type_info = (::app::AndInstruction_AndUInt64__Class**)(modloader::win::memory::resolve_rva(0x04757A48));
    }
    namespace AndInstruction_AndBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndBoolean__Class** type_info = (::app::AndInstruction_AndBoolean__Class**)(modloader::win::memory::resolve_rva(0x0470E978));
    }
    namespace NewArrayInitInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayInitInstruction__Class** type_info = (::app::NewArrayInitInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754C68));
    }
    namespace NewArrayInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayInstruction__Class** type_info = (::app::NewArrayInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476B9C0));
    }
    namespace NewArrayBoundsInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayBoundsInstruction__Class** type_info = (::app::NewArrayBoundsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04761080));
    }
    namespace GetArrayItemInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetArrayItemInstruction__Class** type_info = (::app::GetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754FB0));
    }
    namespace SetArrayItemInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetArrayItemInstruction__Class** type_info = (::app::SetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04704F50));
    }
    namespace ArrayLengthInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayLengthInstruction__Class** type_info = (::app::ArrayLengthInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744FE0));
    }
    namespace BranchLabel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BranchLabel__Class** type_info = (::app::BranchLabel__Class**)(modloader::win::memory::resolve_rva(0x0472E128));
    }
    namespace InstructionList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstructionList__Class** type_info = (::app::InstructionList__Class**)(modloader::win::memory::resolve_rva(0x0470A620));
    }
    namespace MethodInfoCallInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MethodInfoCallInstruction__Class** type_info = (::app::MethodInfoCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x047857E8));
    }
    namespace LightLambda {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightLambda__Class** type_info = (::app::LightLambda__Class**)(modloader::win::memory::resolve_rva(0x0472A460));
    }
    namespace LightDelegateCreator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightDelegateCreator__Class** type_info = (::app::LightDelegateCreator__Class**)(modloader::win::memory::resolve_rva(0x04735408));
    }
    namespace ByRefMethodInfoCallInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByRefMethodInfoCallInstruction__Class** type_info = (::app::ByRefMethodInfoCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DAB8));
    }
    namespace ParameterByRefUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParameterByRefUpdater__Class** type_info = (::app::ParameterByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x0478EFC8));
    }
    namespace LocalVariables {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocalVariables__Class** type_info = (::app::LocalVariables__Class**)(modloader::win::memory::resolve_rva(0x04708620));
    }
    namespace LocalVariables_VariableScope {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocalVariables_VariableScope__Class** type_info = (::app::LocalVariables_VariableScope__Class**)(modloader::win::memory::resolve_rva(0x04720208));
    }
    namespace OffsetInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OffsetInstruction__Class** type_info = (::app::OffsetInstruction__Class**)(modloader::win::memory::resolve_rva(0x04773EA8));
    }
    namespace BranchFalseInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BranchFalseInstruction__Class** type_info = (::app::BranchFalseInstruction__Class**)(modloader::win::memory::resolve_rva(0x04799450));
    }
    namespace BranchTrueInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BranchTrueInstruction__Class** type_info = (::app::BranchTrueInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471E0A0));
    }
    namespace CoalescingBranchInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CoalescingBranchInstruction__Class** type_info = (::app::CoalescingBranchInstruction__Class**)(modloader::win::memory::resolve_rva(0x047412C0));
    }
    namespace BranchInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BranchInstruction__Class** type_info = (::app::BranchInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722600));
    }
    namespace Instruction__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Instruction__Array__Array__Class** type_info = (::app::Instruction__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DE68));
    }
    namespace Instruction__Array__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Instruction__Array__Array__Array__Class** type_info = (::app::Instruction__Array__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04762590));
    }
    namespace GotoInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GotoInstruction__Class** type_info = (::app::GotoInstruction__Class**)(modloader::win::memory::resolve_rva(0x04710878));
    }
    namespace GotoInstruction__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GotoInstruction__Array__Class** type_info = (::app::GotoInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x047538E8));
    }
    namespace EnterTryCatchFinallyInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterTryCatchFinallyInstruction__Class** type_info = (::app::EnterTryCatchFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A098));
    }
    namespace TryCatchFinallyHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TryCatchFinallyHandler__Class** type_info = (::app::TryCatchFinallyHandler__Class**)(modloader::win::memory::resolve_rva(0x04787A10));
    }
    namespace ExceptionHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionHandler__Class** type_info = (::app::ExceptionHandler__Class**)(modloader::win::memory::resolve_rva(0x047591B8));
    }
    namespace ExceptionFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionFilter__Class** type_info = (::app::ExceptionFilter__Class**)(modloader::win::memory::resolve_rva(0x0470EAD0));
    }
    namespace EnterTryFaultInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterTryFaultInstruction__Class** type_info = (::app::EnterTryFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0474C768));
    }
    namespace TryFaultHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TryFaultHandler__Class** type_info = (::app::TryFaultHandler__Class**)(modloader::win::memory::resolve_rva(0x0474CF60));
    }
    namespace EnterFinallyInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterFinallyInstruction__Class** type_info = (::app::EnterFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04736A30));
    }
    namespace EnterFinallyInstruction__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterFinallyInstruction__Array__Class** type_info = (::app::EnterFinallyInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x0478A0B8));
    }
    namespace LeaveFinallyInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaveFinallyInstruction__Class** type_info = (::app::LeaveFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478BF08));
    }
    namespace EnterFaultInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterFaultInstruction__Class** type_info = (::app::EnterFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x047717F8));
    }
    namespace EnterFaultInstruction__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterFaultInstruction__Array__Class** type_info = (::app::EnterFaultInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x04711320));
    }
    namespace LeaveFaultInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaveFaultInstruction__Class** type_info = (::app::LeaveFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F190));
    }
    namespace EnterExceptionFilterInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterExceptionFilterInstruction__Class** type_info = (::app::EnterExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x047543C8));
    }
    namespace LeaveExceptionFilterInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaveExceptionFilterInstruction__Class** type_info = (::app::LeaveExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x0473A900));
    }
    namespace EnterExceptionHandlerInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnterExceptionHandlerInstruction__Class** type_info = (::app::EnterExceptionHandlerInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F148));
    }
    namespace LeaveExceptionHandlerInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaveExceptionHandlerInstruction__Class** type_info = (::app::LeaveExceptionHandlerInstruction__Class**)(modloader::win::memory::resolve_rva(0x0477FBD0));
    }
    namespace LeaveExceptionHandlerInstruction__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaveExceptionHandlerInstruction__Array__Class** type_info = (::app::LeaveExceptionHandlerInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x04765188));
    }
    namespace ThrowInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ThrowInstruction__Class** type_info = (::app::ThrowInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476FE30));
    }
    namespace StringSwitchInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StringSwitchInstruction__Class** type_info = (::app::StringSwitchInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478EB18));
    }
    namespace DecrementInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction__Class** type_info = (::app::DecrementInstruction__Class**)(modloader::win::memory::resolve_rva(0x04768ED8));
    }
    namespace DecrementInstruction_DecrementInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementInt16__Class** type_info = (::app::DecrementInstruction_DecrementInt16__Class**)(modloader::win::memory::resolve_rva(0x04707F40));
    }
    namespace DecrementInstruction_DecrementInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementInt32__Class** type_info = (::app::DecrementInstruction_DecrementInt32__Class**)(modloader::win::memory::resolve_rva(0x0471FD58));
    }
    namespace DecrementInstruction_DecrementInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementInt64__Class** type_info = (::app::DecrementInstruction_DecrementInt64__Class**)(modloader::win::memory::resolve_rva(0x04798F20));
    }
    namespace DecrementInstruction_DecrementUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementUInt16__Class** type_info = (::app::DecrementInstruction_DecrementUInt16__Class**)(modloader::win::memory::resolve_rva(0x04758A10));
    }
    namespace DecrementInstruction_DecrementUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementUInt32__Class** type_info = (::app::DecrementInstruction_DecrementUInt32__Class**)(modloader::win::memory::resolve_rva(0x0472D000));
    }
    namespace DecrementInstruction_DecrementUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementUInt64__Class** type_info = (::app::DecrementInstruction_DecrementUInt64__Class**)(modloader::win::memory::resolve_rva(0x04741660));
    }
    namespace DecrementInstruction_DecrementSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementSingle__Class** type_info = (::app::DecrementInstruction_DecrementSingle__Class**)(modloader::win::memory::resolve_rva(0x0472F8A0));
    }
    namespace DecrementInstruction_DecrementDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecrementInstruction_DecrementDouble__Class** type_info = (::app::DecrementInstruction_DecrementDouble__Class**)(modloader::win::memory::resolve_rva(0x04706820));
    }
    namespace DefaultValueInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultValueInstruction__Class** type_info = (::app::DefaultValueInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722350));
    }
    namespace DivInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction__Class** type_info = (::app::DivInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F8B0));
    }
    namespace DivInstruction_DivInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivInt16__Class** type_info = (::app::DivInstruction_DivInt16__Class**)(modloader::win::memory::resolve_rva(0x0472D158));
    }
    namespace DivInstruction_DivInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivInt32__Class** type_info = (::app::DivInstruction_DivInt32__Class**)(modloader::win::memory::resolve_rva(0x04762B58));
    }
    namespace DivInstruction_DivInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivInt64__Class** type_info = (::app::DivInstruction_DivInt64__Class**)(modloader::win::memory::resolve_rva(0x04752DD0));
    }
    namespace DivInstruction_DivUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivUInt16__Class** type_info = (::app::DivInstruction_DivUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475EA78));
    }
    namespace DivInstruction_DivUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivUInt32__Class** type_info = (::app::DivInstruction_DivUInt32__Class**)(modloader::win::memory::resolve_rva(0x0478C558));
    }
    namespace DivInstruction_DivUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivUInt64__Class** type_info = (::app::DivInstruction_DivUInt64__Class**)(modloader::win::memory::resolve_rva(0x04797820));
    }
    namespace DivInstruction_DivSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivSingle__Class** type_info = (::app::DivInstruction_DivSingle__Class**)(modloader::win::memory::resolve_rva(0x0471D008));
    }
    namespace DivInstruction_DivDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DivInstruction_DivDouble__Class** type_info = (::app::DivInstruction_DivDouble__Class**)(modloader::win::memory::resolve_rva(0x04736DA8));
    }
    namespace EqualInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction__Class** type_info = (::app::EqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478E7B0));
    }
    namespace EqualInstruction_EqualBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualBoolean__Class** type_info = (::app::EqualInstruction_EqualBoolean__Class**)(modloader::win::memory::resolve_rva(0x04757DE8));
    }
    namespace EqualInstruction_EqualSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualSByte__Class** type_info = (::app::EqualInstruction_EqualSByte__Class**)(modloader::win::memory::resolve_rva(0x04751A48));
    }
    namespace EqualInstruction_EqualInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt16__Class** type_info = (::app::EqualInstruction_EqualInt16__Class**)(modloader::win::memory::resolve_rva(0x04791CF8));
    }
    namespace EqualInstruction_EqualChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualChar__Class** type_info = (::app::EqualInstruction_EqualChar__Class**)(modloader::win::memory::resolve_rva(0x0474B940));
    }
    namespace EqualInstruction_EqualInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt32__Class** type_info = (::app::EqualInstruction_EqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0477D788));
    }
    namespace EqualInstruction_EqualInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt64__Class** type_info = (::app::EqualInstruction_EqualInt64__Class**)(modloader::win::memory::resolve_rva(0x047423D0));
    }
    namespace EqualInstruction_EqualByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualByte__Class** type_info = (::app::EqualInstruction_EqualByte__Class**)(modloader::win::memory::resolve_rva(0x0477B960));
    }
    namespace EqualInstruction_EqualUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt16__Class** type_info = (::app::EqualInstruction_EqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x0478BBC0));
    }
    namespace EqualInstruction_EqualUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt32__Class** type_info = (::app::EqualInstruction_EqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04702C50));
    }
    namespace EqualInstruction_EqualUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt64__Class** type_info = (::app::EqualInstruction_EqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x04775460));
    }
    namespace EqualInstruction_EqualSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualSingle__Class** type_info = (::app::EqualInstruction_EqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0471F7C8));
    }
    namespace EqualInstruction_EqualDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualDouble__Class** type_info = (::app::EqualInstruction_EqualDouble__Class**)(modloader::win::memory::resolve_rva(0x04770BC0));
    }
    namespace EqualInstruction_EqualReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualReference__Class** type_info = (::app::EqualInstruction_EqualReference__Class**)(modloader::win::memory::resolve_rva(0x04770758));
    }
    namespace EqualInstruction_EqualBooleanLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualBooleanLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualBooleanLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04772630));
    }
    namespace EqualInstruction_EqualSByteLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualSByteLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualSByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04772408));
    }
    namespace EqualInstruction_EqualInt16LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt16LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047774D8));
    }
    namespace EqualInstruction_EqualCharLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualCharLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualCharLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04720820));
    }
    namespace EqualInstruction_EqualInt32LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt32LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0476EE18));
    }
    namespace EqualInstruction_EqualInt64LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualInt64LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04741800));
    }
    namespace EqualInstruction_EqualByteLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualByteLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04790CD8));
    }
    namespace EqualInstruction_EqualUInt16LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt16LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualUInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0470EC08));
    }
    namespace EqualInstruction_EqualUInt32LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt32LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualUInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0471DE38));
    }
    namespace EqualInstruction_EqualUInt64LiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualUInt64LiftedToNull__Class** type_info = (::app::EqualInstruction_EqualUInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04705710));
    }
    namespace EqualInstruction_EqualSingleLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualSingleLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualSingleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047591A0));
    }
    namespace EqualInstruction_EqualDoubleLiftedToNull {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EqualInstruction_EqualDoubleLiftedToNull__Class** type_info = (::app::EqualInstruction_EqualDoubleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047430F8));
    }
    namespace ExclusiveOrInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction__Class** type_info = (::app::ExclusiveOrInstruction__Class**)(modloader::win::memory::resolve_rva(0x047653A8));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrSByte__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrSByte__Class**)(modloader::win::memory::resolve_rva(0x047063C0));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrInt16__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrInt16__Class**)(modloader::win::memory::resolve_rva(0x0477DB78));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrInt32__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrInt32__Class**)(modloader::win::memory::resolve_rva(0x04729628));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrInt64__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrInt64__Class**)(modloader::win::memory::resolve_rva(0x047220A0));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrByte__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrByte__Class**)(modloader::win::memory::resolve_rva(0x04733DB8));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class**)(modloader::win::memory::resolve_rva(0x0478EAF8));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class**)(modloader::win::memory::resolve_rva(0x04782FF0));
    }
    namespace ExclusiveOrInstruction_ExclusiveOrUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class**)(modloader::win::memory::resolve_rva(0x0472D8C0));
    }
} // namespace app::classes::types
