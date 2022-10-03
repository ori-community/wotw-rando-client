#include <Il2CppModLoader/app/types/ArrayByRefUpdater.h>
#include <Il2CppModLoader/app/types/AssignLocalBoxedInstruction.h>
#include <Il2CppModLoader/app/types/AssignLocalInstruction.h>
#include <Il2CppModLoader/app/types/AssignLocalToClosureInstruction.h>
#include <Il2CppModLoader/app/types/ExclusiveOrInstruction_ExclusiveOrBoolean.h>
#include <Il2CppModLoader/app/types/FieldByRefUpdater.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanByte.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanChar.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanDouble.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanInt16.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanInt32.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanInt64.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanSByte.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanSingle.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanUInt16.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanUInt32.h>
#include <Il2CppModLoader/app/types/GreaterThanInstruction_GreaterThanUInt64.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualByte.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualChar.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32.h>
#include <Il2CppModLoader/app/types/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64.h>
#include <Il2CppModLoader/app/types/IncrementInstruction.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementDouble.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementInt16.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementInt32.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementInt64.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementSingle.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementUInt16.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementUInt32.h>
#include <Il2CppModLoader/app/types/IncrementInstruction_IncrementUInt64.h>
#include <Il2CppModLoader/app/types/IndexMethodByRefUpdater.h>
#include <Il2CppModLoader/app/types/InitializeLocalInstruction_ImmutableValue.h>
#include <Il2CppModLoader/app/types/InitializeLocalInstruction_Reference.h>
#include <Il2CppModLoader/app/types/InstructionList_DebugView_InstructionView.h>
#include <Il2CppModLoader/app/types/InterpretedFrameInfo.h>
#include <Il2CppModLoader/app/types/InterpretedFrame_GetStackTraceDebugInfo_d_29.h>
#include <Il2CppModLoader/app/types/LabelInfo.h>
#include <Il2CppModLoader/app/types/LabelInfo_c.h>
#include <Il2CppModLoader/app/types/LabelScopeInfo.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftByte.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftInt16.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftInt32.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftInt64.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftSByte.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftUInt16.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftUInt32.h>
#include <Il2CppModLoader/app/types/LeftShiftInstruction_LeftShiftUInt64.h>
#include <Il2CppModLoader/app/types/LessThanInstruction.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanByte.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanChar.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanDouble.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanInt16.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanInt32.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanInt64.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanSByte.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanSingle.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanUInt16.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanUInt32.h>
#include <Il2CppModLoader/app/types/LessThanInstruction_LessThanUInt64.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualByte.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualChar.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualDouble.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualInt16.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualInt32.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualInt64.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualSByte.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualSingle.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualUInt16.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualUInt32.h>
#include <Il2CppModLoader/app/types/LessThanOrEqualInstruction_LessThanOrEqualUInt64.h>
#include <Il2CppModLoader/app/types/LightCompiler.h>
#include <Il2CppModLoader/app/types/LightCompiler_QuoteVisitor.h>
#include <Il2CppModLoader/app/types/LightCompiler_c.h>
#include <Il2CppModLoader/app/types/LightLambda_c_DisplayClass74_0.h>
#include <Il2CppModLoader/app/types/LoadFieldInstruction.h>
#include <Il2CppModLoader/app/types/LoadLocalBoxedInstruction.h>
#include <Il2CppModLoader/app/types/LoadLocalFromClosureBoxedInstruction.h>
#include <Il2CppModLoader/app/types/LoadLocalFromClosureInstruction.h>
#include <Il2CppModLoader/app/types/LoadLocalInstruction.h>
#include <Il2CppModLoader/app/types/LoadStaticFieldInstruction.h>
#include <Il2CppModLoader/app/types/LocalDefinition.h>
#include <Il2CppModLoader/app/types/LocalDefinition__Array.h>
#include <Il2CppModLoader/app/types/PropertyByRefUpdater.h>
#include <Il2CppModLoader/app/types/RethrowException.h>
#include <Il2CppModLoader/app/types/StoreFieldInstruction.h>
#include <Il2CppModLoader/app/types/StoreLocalBoxedInstruction.h>
#include <Il2CppModLoader/app/types/StoreLocalInstruction.h>
#include <Il2CppModLoader/app/types/StoreStaticFieldInstruction.h>
#include <Il2CppModLoader/app/types/ValueTypeCopyInstruction.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrBoolean {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class** type_info = (::app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class**)(modloader::win::memory::resolve_rva(0x04781AB8));
    }
    namespace LoadStaticFieldInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadStaticFieldInstruction__Class** type_info = (::app::LoadStaticFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DD50));
    }
    namespace LoadFieldInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadFieldInstruction__Class** type_info = (::app::LoadFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778A70));
    }
    namespace StoreFieldInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StoreFieldInstruction__Class** type_info = (::app::StoreFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478AED8));
    }
    namespace StoreStaticFieldInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StoreStaticFieldInstruction__Class** type_info = (::app::StoreStaticFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0475D670));
    }
    namespace GreaterThanInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction__Class** type_info = (::app::GreaterThanInstruction__Class**)(modloader::win::memory::resolve_rva(0x04796680));
    }
    namespace GreaterThanInstruction_GreaterThanSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanSByte__Class** type_info = (::app::GreaterThanInstruction_GreaterThanSByte__Class**)(modloader::win::memory::resolve_rva(0x04725E80));
    }
    namespace GreaterThanInstruction_GreaterThanInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanInt16__Class** type_info = (::app::GreaterThanInstruction_GreaterThanInt16__Class**)(modloader::win::memory::resolve_rva(0x047388E8));
    }
    namespace GreaterThanInstruction_GreaterThanChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanChar__Class** type_info = (::app::GreaterThanInstruction_GreaterThanChar__Class**)(modloader::win::memory::resolve_rva(0x04703718));
    }
    namespace GreaterThanInstruction_GreaterThanInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanInt32__Class** type_info = (::app::GreaterThanInstruction_GreaterThanInt32__Class**)(modloader::win::memory::resolve_rva(0x04751B28));
    }
    namespace GreaterThanInstruction_GreaterThanInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanInt64__Class** type_info = (::app::GreaterThanInstruction_GreaterThanInt64__Class**)(modloader::win::memory::resolve_rva(0x04747D80));
    }
    namespace GreaterThanInstruction_GreaterThanByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanByte__Class** type_info = (::app::GreaterThanInstruction_GreaterThanByte__Class**)(modloader::win::memory::resolve_rva(0x04761388));
    }
    namespace GreaterThanInstruction_GreaterThanUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanUInt16__Class** type_info = (::app::GreaterThanInstruction_GreaterThanUInt16__Class**)(modloader::win::memory::resolve_rva(0x04771BC0));
    }
    namespace GreaterThanInstruction_GreaterThanUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanUInt32__Class** type_info = (::app::GreaterThanInstruction_GreaterThanUInt32__Class**)(modloader::win::memory::resolve_rva(0x0472BF50));
    }
    namespace GreaterThanInstruction_GreaterThanUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanUInt64__Class** type_info = (::app::GreaterThanInstruction_GreaterThanUInt64__Class**)(modloader::win::memory::resolve_rva(0x047160B0));
    }
    namespace GreaterThanInstruction_GreaterThanSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanSingle__Class** type_info = (::app::GreaterThanInstruction_GreaterThanSingle__Class**)(modloader::win::memory::resolve_rva(0x04734600));
    }
    namespace GreaterThanInstruction_GreaterThanDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanInstruction_GreaterThanDouble__Class** type_info = (::app::GreaterThanInstruction_GreaterThanDouble__Class**)(modloader::win::memory::resolve_rva(0x0476C0D8));
    }
    namespace GreaterThanOrEqualInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction__Class** type_info = (::app::GreaterThanOrEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x04756DE8));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047705A0));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class**)(modloader::win::memory::resolve_rva(0x04721D10));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x047697D8));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0471CD68));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x047433C0));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class**)(modloader::win::memory::resolve_rva(0x04706CC0));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04780320));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x0478EC48));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0478BB40));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0478BC68));
    }
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class** type_info = (::app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x047562E8));
    }
    namespace IncrementInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction__Class** type_info = (::app::IncrementInstruction__Class**)(modloader::win::memory::resolve_rva(0x04747A18));
    }
    namespace IncrementInstruction_IncrementInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementInt16__Class** type_info = (::app::IncrementInstruction_IncrementInt16__Class**)(modloader::win::memory::resolve_rva(0x04737990));
    }
    namespace IncrementInstruction_IncrementInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementInt32__Class** type_info = (::app::IncrementInstruction_IncrementInt32__Class**)(modloader::win::memory::resolve_rva(0x04784B50));
    }
    namespace IncrementInstruction_IncrementInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementInt64__Class** type_info = (::app::IncrementInstruction_IncrementInt64__Class**)(modloader::win::memory::resolve_rva(0x04714140));
    }
    namespace IncrementInstruction_IncrementUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementUInt16__Class** type_info = (::app::IncrementInstruction_IncrementUInt16__Class**)(modloader::win::memory::resolve_rva(0x04771C80));
    }
    namespace IncrementInstruction_IncrementUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementUInt32__Class** type_info = (::app::IncrementInstruction_IncrementUInt32__Class**)(modloader::win::memory::resolve_rva(0x04704F40));
    }
    namespace IncrementInstruction_IncrementUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementUInt64__Class** type_info = (::app::IncrementInstruction_IncrementUInt64__Class**)(modloader::win::memory::resolve_rva(0x0473B7F8));
    }
    namespace IncrementInstruction_IncrementSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementSingle__Class** type_info = (::app::IncrementInstruction_IncrementSingle__Class**)(modloader::win::memory::resolve_rva(0x04747E10));
    }
    namespace IncrementInstruction_IncrementDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementInstruction_IncrementDouble__Class** type_info = (::app::IncrementInstruction_IncrementDouble__Class**)(modloader::win::memory::resolve_rva(0x04770DB0));
    }
    namespace InstructionList_DebugView_InstructionView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstructionList_DebugView_InstructionView__Class** type_info = (::app::InstructionList_DebugView_InstructionView__Class**)(modloader::win::memory::resolve_rva(0x04725370));
    }
    namespace InterpretedFrameInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InterpretedFrameInfo__Class** type_info = (::app::InterpretedFrameInfo__Class**)(modloader::win::memory::resolve_rva(0x04774628));
    }
    namespace InterpretedFrame_GetStackTraceDebugInfo_d_29 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class** type_info = (::app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class**)(modloader::win::memory::resolve_rva(0x0470FDE0));
    }
    namespace LabelInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LabelInfo__Class** type_info = (::app::LabelInfo__Class**)(modloader::win::memory::resolve_rva(0x04739D68));
    }
    namespace LabelScopeInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LabelScopeInfo__Class** type_info = (::app::LabelScopeInfo__Class**)(modloader::win::memory::resolve_rva(0x047401F0));
    }
    namespace LightCompiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCompiler__Class** type_info = (::app::LightCompiler__Class**)(modloader::win::memory::resolve_rva(0x04778E58));
    }
    namespace LocalDefinition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDefinition__Class** type_info = (::app::LocalDefinition__Class**)(modloader::win::memory::resolve_rva(0x0471BA50));
    }
    namespace LocalDefinition__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocalDefinition__Array__Class** type_info = (::app::LocalDefinition__Array__Class**)(modloader::win::memory::resolve_rva(0x04738FB8));
    }
    namespace LabelInfo_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LabelInfo_c__Class** type_info = (::app::LabelInfo_c__Class**)(modloader::win::memory::resolve_rva(0x0475FC70));
    }
    namespace LeftShiftInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction__Class** type_info = (::app::LeftShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x04751158));
    }
    namespace LeftShiftInstruction_LeftShiftSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftSByte__Class** type_info = (::app::LeftShiftInstruction_LeftShiftSByte__Class**)(modloader::win::memory::resolve_rva(0x04712290));
    }
    namespace LeftShiftInstruction_LeftShiftInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftInt16__Class** type_info = (::app::LeftShiftInstruction_LeftShiftInt16__Class**)(modloader::win::memory::resolve_rva(0x0473A410));
    }
    namespace LeftShiftInstruction_LeftShiftInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftInt32__Class** type_info = (::app::LeftShiftInstruction_LeftShiftInt32__Class**)(modloader::win::memory::resolve_rva(0x04732FB0));
    }
    namespace LeftShiftInstruction_LeftShiftInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftInt64__Class** type_info = (::app::LeftShiftInstruction_LeftShiftInt64__Class**)(modloader::win::memory::resolve_rva(0x04730558));
    }
    namespace LeftShiftInstruction_LeftShiftByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftByte__Class** type_info = (::app::LeftShiftInstruction_LeftShiftByte__Class**)(modloader::win::memory::resolve_rva(0x047176F0));
    }
    namespace LeftShiftInstruction_LeftShiftUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftUInt16__Class** type_info = (::app::LeftShiftInstruction_LeftShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0470DE70));
    }
    namespace LeftShiftInstruction_LeftShiftUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftUInt32__Class** type_info = (::app::LeftShiftInstruction_LeftShiftUInt32__Class**)(modloader::win::memory::resolve_rva(0x04759350));
    }
    namespace LeftShiftInstruction_LeftShiftUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeftShiftInstruction_LeftShiftUInt64__Class** type_info = (::app::LeftShiftInstruction_LeftShiftUInt64__Class**)(modloader::win::memory::resolve_rva(0x0470C618));
    }
    namespace LessThanInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction__Class** type_info = (::app::LessThanInstruction__Class**)(modloader::win::memory::resolve_rva(0x04769220));
    }
    namespace LessThanInstruction_LessThanSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanSByte__Class** type_info = (::app::LessThanInstruction_LessThanSByte__Class**)(modloader::win::memory::resolve_rva(0x047715B8));
    }
    namespace LessThanInstruction_LessThanInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanInt16__Class** type_info = (::app::LessThanInstruction_LessThanInt16__Class**)(modloader::win::memory::resolve_rva(0x0472D780));
    }
    namespace LessThanInstruction_LessThanChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanChar__Class** type_info = (::app::LessThanInstruction_LessThanChar__Class**)(modloader::win::memory::resolve_rva(0x0472D338));
    }
    namespace LessThanInstruction_LessThanInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanInt32__Class** type_info = (::app::LessThanInstruction_LessThanInt32__Class**)(modloader::win::memory::resolve_rva(0x04758958));
    }
    namespace LessThanInstruction_LessThanInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanInt64__Class** type_info = (::app::LessThanInstruction_LessThanInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CEE0));
    }
    namespace LessThanInstruction_LessThanByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanByte__Class** type_info = (::app::LessThanInstruction_LessThanByte__Class**)(modloader::win::memory::resolve_rva(0x047664C0));
    }
    namespace LessThanInstruction_LessThanUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanUInt16__Class** type_info = (::app::LessThanInstruction_LessThanUInt16__Class**)(modloader::win::memory::resolve_rva(0x04785A58));
    }
    namespace LessThanInstruction_LessThanUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanUInt32__Class** type_info = (::app::LessThanInstruction_LessThanUInt32__Class**)(modloader::win::memory::resolve_rva(0x04778900));
    }
    namespace LessThanInstruction_LessThanUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanUInt64__Class** type_info = (::app::LessThanInstruction_LessThanUInt64__Class**)(modloader::win::memory::resolve_rva(0x0477E950));
    }
    namespace LessThanInstruction_LessThanSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanSingle__Class** type_info = (::app::LessThanInstruction_LessThanSingle__Class**)(modloader::win::memory::resolve_rva(0x047428F8));
    }
    namespace LessThanInstruction_LessThanDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanInstruction_LessThanDouble__Class** type_info = (::app::LessThanInstruction_LessThanDouble__Class**)(modloader::win::memory::resolve_rva(0x0472DE68));
    }
    namespace LessThanOrEqualInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction__Class** type_info = (::app::LessThanOrEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x047611F8));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualSByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047546F0));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class**)(modloader::win::memory::resolve_rva(0x0477ED48));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x04797E80));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0478D740));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x0477D270));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class**)(modloader::win::memory::resolve_rva(0x0478D928));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475DF98));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualUInt32__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04725470));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0470A758));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualSingle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0477BD68));
    }
    namespace LessThanOrEqualInstruction_LessThanOrEqualDouble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class** type_info = (::app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x0476B8A8));
    }
    namespace RethrowException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RethrowException__Class** type_info = (::app::RethrowException__Class**)(modloader::win::memory::resolve_rva(0x04756D30));
    }
    namespace LightCompiler_QuoteVisitor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCompiler_QuoteVisitor__Class** type_info = (::app::LightCompiler_QuoteVisitor__Class**)(modloader::win::memory::resolve_rva(0x04705AC8));
    }
    namespace LightCompiler_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCompiler_c__Class** type_info = (::app::LightCompiler_c__Class**)(modloader::win::memory::resolve_rva(0x047424D8));
    }
    namespace ArrayByRefUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayByRefUpdater__Class** type_info = (::app::ArrayByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x047932D8));
    }
    namespace FieldByRefUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FieldByRefUpdater__Class** type_info = (::app::FieldByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04736CD0));
    }
    namespace PropertyByRefUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyByRefUpdater__Class** type_info = (::app::PropertyByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04756AA8));
    }
    namespace IndexMethodByRefUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IndexMethodByRefUpdater__Class** type_info = (::app::IndexMethodByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04738058));
    }
    namespace LightLambda_c_DisplayClass74_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightLambda_c_DisplayClass74_0__Class** type_info = (::app::LightLambda_c_DisplayClass74_0__Class**)(modloader::win::memory::resolve_rva(0x04772D38));
    }
    namespace LoadLocalInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadLocalInstruction__Class** type_info = (::app::LoadLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478C590));
    }
    namespace LoadLocalBoxedInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadLocalBoxedInstruction__Class** type_info = (::app::LoadLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04720A38));
    }
    namespace LoadLocalFromClosureInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadLocalFromClosureInstruction__Class** type_info = (::app::LoadLocalFromClosureInstruction__Class**)(modloader::win::memory::resolve_rva(0x0479A2D0));
    }
    namespace LoadLocalFromClosureBoxedInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadLocalFromClosureBoxedInstruction__Class** type_info = (::app::LoadLocalFromClosureBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04716160));
    }
    namespace AssignLocalInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssignLocalInstruction__Class** type_info = (::app::AssignLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x04750D30));
    }
    namespace StoreLocalInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StoreLocalInstruction__Class** type_info = (::app::StoreLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A8D8));
    }
    namespace AssignLocalBoxedInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssignLocalBoxedInstruction__Class** type_info = (::app::AssignLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04758AD0));
    }
    namespace StoreLocalBoxedInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StoreLocalBoxedInstruction__Class** type_info = (::app::StoreLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744388));
    }
    namespace AssignLocalToClosureInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssignLocalToClosureInstruction__Class** type_info = (::app::AssignLocalToClosureInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731E40));
    }
    namespace ValueTypeCopyInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ValueTypeCopyInstruction__Class** type_info = (::app::ValueTypeCopyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04787028));
    }
    namespace InitializeLocalInstruction_Reference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InitializeLocalInstruction_Reference__Class** type_info = (::app::InitializeLocalInstruction_Reference__Class**)(modloader::win::memory::resolve_rva(0x0477DB68));
    }
    namespace InitializeLocalInstruction_ImmutableValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InitializeLocalInstruction_ImmutableValue__Class** type_info = (::app::InitializeLocalInstruction_ImmutableValue__Class**)(modloader::win::memory::resolve_rva(0x0473EBF8));
    }
} // namespace app::classes::types
