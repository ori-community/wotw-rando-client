#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TypeBinaryExpression.h>
#include <Il2CppModLoader/app/types/UnaryExpression.h>
#include <Il2CppModLoader/app/types/MemberInitExpression.h>
#include <Il2CppModLoader/app/types/MemberBindingType__Enum.h>
#include <Il2CppModLoader/app/types/ListInitExpression.h>
#include <Il2CppModLoader/app/types/ElementInit.h>
#include <Il2CppModLoader/app/types/MemberAssignment.h>
#include <Il2CppModLoader/app/types/MemberMemberBinding.h>
#include <Il2CppModLoader/app/types/MemberListBinding.h>
#include <Il2CppModLoader/app/types/LogicalBinaryExpression.h>
#include <Il2CppModLoader/app/types/AssignBinaryExpression.h>
#include <Il2CppModLoader/app/types/CoalesceConversionBinaryExpression.h>
#include <Il2CppModLoader/app/types/SimpleBinaryExpression.h>
#include <Il2CppModLoader/app/types/MethodBinaryExpression.h>
#include <Il2CppModLoader/app/types/OpAssignMethodConversionBinaryExpression.h>
#include <Il2CppModLoader/app/types/Block2.h>
#include <Il2CppModLoader/app/types/Block3.h>
#include <Il2CppModLoader/app/types/Block4.h>
#include <Il2CppModLoader/app/types/Block5.h>
#include <Il2CppModLoader/app/types/BlockN.h>
#include <Il2CppModLoader/app/types/Scope1.h>
#include <Il2CppModLoader/app/types/ScopeN.h>
#include <Il2CppModLoader/app/types/ScopeWithType.h>
#include <Il2CppModLoader/app/types/BlockExpressionList.h>
#include <Il2CppModLoader/app/types/BlockExpressionList_GetEnumerator_d_18.h>
#include <Il2CppModLoader/app/types/FullConditionalExpression.h>
#include <Il2CppModLoader/app/types/FullConditionalExpressionWithType.h>
#include <Il2CppModLoader/app/types/TypedConstantExpression.h>
#include <Il2CppModLoader/app/types/DebugViewWriter.h>
#include <Il2CppModLoader/app/types/ExpressionStringBuilder.h>
#include <Il2CppModLoader/app/types/IArgumentProvider.h>
#include <Il2CppModLoader/app/types/IParameterProvider.h>
#include <Il2CppModLoader/app/types/InvocationExpressionN.h>
#include <Il2CppModLoader/app/types/InvocationExpression0.h>
#include <Il2CppModLoader/app/types/InvocationExpression1.h>
#include <Il2CppModLoader/app/types/InvocationExpression2.h>
#include <Il2CppModLoader/app/types/InvocationExpression3.h>
#include <Il2CppModLoader/app/types/InvocationExpression4.h>
#include <Il2CppModLoader/app/types/InvocationExpression5.h>
#include <Il2CppModLoader/app/types/PropertyExpression.h>
#include <Il2CppModLoader/app/types/FieldExpression.h>
#include <Il2CppModLoader/app/types/MethodCallExpressionN.h>
#include <Il2CppModLoader/app/types/InstanceMethodCallExpressionN.h>
#include <Il2CppModLoader/app/types/MethodCallExpression0.h>
#include <Il2CppModLoader/app/types/MethodCallExpression1.h>
#include <Il2CppModLoader/app/types/MethodCallExpression2.h>
#include <Il2CppModLoader/app/types/MethodCallExpression3.h>
#include <Il2CppModLoader/app/types/MethodCallExpression4.h>
#include <Il2CppModLoader/app/types/MethodCallExpression5.h>
#include <Il2CppModLoader/app/types/InstanceMethodCallExpression0.h>
#include <Il2CppModLoader/app/types/InstanceMethodCallExpression1.h>
#include <Il2CppModLoader/app/types/InstanceMethodCallExpression2.h>
#include <Il2CppModLoader/app/types/InstanceMethodCallExpression3.h>
#include <Il2CppModLoader/app/types/NewArrayInitExpression.h>
#include <Il2CppModLoader/app/types/NewArrayBoundsExpression.h>
#include <Il2CppModLoader/app/types/TypedParameterExpression.h>
#include <Il2CppModLoader/app/types/ByRefParameterExpression.h>
#include <Il2CppModLoader/app/types/StackGuard_1.h>
#include <Il2CppModLoader/app/types/AddInstruction.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddInt16.h>
#include <Il2CppModLoader/app/types/InterpretedFrame.h>
#include <Il2CppModLoader/app/types/InstructionArray.h>
#include <Il2CppModLoader/app/types/Interpreter.h>
#include <Il2CppModLoader/app/types/Instruction__Array.h>
#include <Il2CppModLoader/app/types/RuntimeLabel__Array.h>
#include <Il2CppModLoader/app/types/DebugInfo.h>
#include <Il2CppModLoader/app/types/DebugInfo_DebugInfoComparer.h>
#include <Il2CppModLoader/app/types/LocalVariable.h>
#include <Il2CppModLoader/app/types/IStrongBox.h>
#include <Il2CppModLoader/app/types/IStrongBox__Array.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddInt32.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddInt64.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddUInt16.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddUInt32.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddUInt64.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddSingle.h>
#include <Il2CppModLoader/app/types/AddInstruction_AddDouble.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfInt16.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfInt32.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfInt64.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfUInt16.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfUInt32.h>
#include <Il2CppModLoader/app/types/AddOvfInstruction_AddOvfUInt64.h>
#include <Il2CppModLoader/app/types/AndInstruction.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndSByte.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndInt16.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndInt32.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndInt64.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndByte.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndUInt16.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndUInt32.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndUInt64.h>
#include <Il2CppModLoader/app/types/AndInstruction_AndBoolean.h>
#include <Il2CppModLoader/app/types/NewArrayInitInstruction.h>
#include <Il2CppModLoader/app/types/NewArrayInstruction.h>
#include <Il2CppModLoader/app/types/NewArrayBoundsInstruction.h>
#include <Il2CppModLoader/app/types/GetArrayItemInstruction.h>
#include <Il2CppModLoader/app/types/SetArrayItemInstruction.h>
#include <Il2CppModLoader/app/types/ArrayLengthInstruction.h>

namespace app::classes::types {
    namespace TypeBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeBinaryExpression__Class** type_info = (::app::TypeBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0475CA78)); }
    namespace UnaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::UnaryExpression__Class** type_info = (::app::UnaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04752AD8)); }
    namespace MemberInitExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberInitExpression__Class** type_info = (::app::MemberInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0472B7C0)); }
    namespace MemberBindingType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberBindingType__Enum__Class** type_info = (::app::MemberBindingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705770)); }
    namespace ListInitExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::ListInitExpression__Class** type_info = (::app::ListInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0473A5B0)); }
    namespace ElementInit { IL2CPP_MODLOADER_DLLEXPORT ::app::ElementInit__Class** type_info = (::app::ElementInit__Class**)(modloader::win::memory::resolve_rva(0x04726D88)); }
    namespace MemberAssignment { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberAssignment__Class** type_info = (::app::MemberAssignment__Class**)(modloader::win::memory::resolve_rva(0x04709B28)); }
    namespace MemberMemberBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberMemberBinding__Class** type_info = (::app::MemberMemberBinding__Class**)(modloader::win::memory::resolve_rva(0x047896E0)); }
    namespace MemberListBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberListBinding__Class** type_info = (::app::MemberListBinding__Class**)(modloader::win::memory::resolve_rva(0x047689D8)); }
    namespace LogicalBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::LogicalBinaryExpression__Class** type_info = (::app::LogicalBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FED8)); }
    namespace AssignBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::AssignBinaryExpression__Class** type_info = (::app::AssignBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478E4B0)); }
    namespace CoalesceConversionBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::CoalesceConversionBinaryExpression__Class** type_info = (::app::CoalesceConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04729FB8)); }
    namespace SimpleBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleBinaryExpression__Class** type_info = (::app::SimpleBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04773D80)); }
    namespace MethodBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodBinaryExpression__Class** type_info = (::app::MethodBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04716FA8)); }
    namespace OpAssignMethodConversionBinaryExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::OpAssignMethodConversionBinaryExpression__Class** type_info = (::app::OpAssignMethodConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04779A80)); }
    namespace Block2 { IL2CPP_MODLOADER_DLLEXPORT ::app::Block2__Class** type_info = (::app::Block2__Class**)(modloader::win::memory::resolve_rva(0x047243B0)); }
    namespace Block3 { IL2CPP_MODLOADER_DLLEXPORT ::app::Block3__Class** type_info = (::app::Block3__Class**)(modloader::win::memory::resolve_rva(0x04773898)); }
    namespace Block4 { IL2CPP_MODLOADER_DLLEXPORT ::app::Block4__Class** type_info = (::app::Block4__Class**)(modloader::win::memory::resolve_rva(0x04704F30)); }
    namespace Block5 { IL2CPP_MODLOADER_DLLEXPORT ::app::Block5__Class** type_info = (::app::Block5__Class**)(modloader::win::memory::resolve_rva(0x04771888)); }
    namespace BlockN { IL2CPP_MODLOADER_DLLEXPORT ::app::BlockN__Class** type_info = (::app::BlockN__Class**)(modloader::win::memory::resolve_rva(0x04764F38)); }
    namespace Scope1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Scope1__Class** type_info = (::app::Scope1__Class**)(modloader::win::memory::resolve_rva(0x04746348)); }
    namespace ScopeN { IL2CPP_MODLOADER_DLLEXPORT ::app::ScopeN__Class** type_info = (::app::ScopeN__Class**)(modloader::win::memory::resolve_rva(0x04787038)); }
    namespace ScopeWithType { IL2CPP_MODLOADER_DLLEXPORT ::app::ScopeWithType__Class** type_info = (::app::ScopeWithType__Class**)(modloader::win::memory::resolve_rva(0x0477F758)); }
    namespace BlockExpressionList { IL2CPP_MODLOADER_DLLEXPORT ::app::BlockExpressionList__Class** type_info = (::app::BlockExpressionList__Class**)(modloader::win::memory::resolve_rva(0x04795F50)); }
    namespace BlockExpressionList_GetEnumerator_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::BlockExpressionList_GetEnumerator_d_18__Class** type_info = (::app::BlockExpressionList_GetEnumerator_d_18__Class**)(modloader::win::memory::resolve_rva(0x04778E60)); }
    namespace FullConditionalExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::FullConditionalExpression__Class** type_info = (::app::FullConditionalExpression__Class**)(modloader::win::memory::resolve_rva(0x0473B7F0)); }
    namespace FullConditionalExpressionWithType { IL2CPP_MODLOADER_DLLEXPORT ::app::FullConditionalExpressionWithType__Class** type_info = (::app::FullConditionalExpressionWithType__Class**)(modloader::win::memory::resolve_rva(0x04719F68)); }
    namespace TypedConstantExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::TypedConstantExpression__Class** type_info = (::app::TypedConstantExpression__Class**)(modloader::win::memory::resolve_rva(0x04742E60)); }
    namespace DebugViewWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugViewWriter__Class** type_info = (::app::DebugViewWriter__Class**)(modloader::win::memory::resolve_rva(0x04751348)); }
    namespace ExpressionStringBuilder { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpressionStringBuilder__Class** type_info = (::app::ExpressionStringBuilder__Class**)(modloader::win::memory::resolve_rva(0x04781ED0)); }
    namespace IArgumentProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IArgumentProvider__Class** type_info = (::app::IArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x0470B5D8)); }
    namespace IParameterProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IParameterProvider__Class** type_info = (::app::IParameterProvider__Class**)(modloader::win::memory::resolve_rva(0x04746ED8)); }
    namespace InvocationExpressionN { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpressionN__Class** type_info = (::app::InvocationExpressionN__Class**)(modloader::win::memory::resolve_rva(0x0473F070)); }
    namespace InvocationExpression0 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression0__Class** type_info = (::app::InvocationExpression0__Class**)(modloader::win::memory::resolve_rva(0x04797368)); }
    namespace InvocationExpression1 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression1__Class** type_info = (::app::InvocationExpression1__Class**)(modloader::win::memory::resolve_rva(0x04706408)); }
    namespace InvocationExpression2 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression2__Class** type_info = (::app::InvocationExpression2__Class**)(modloader::win::memory::resolve_rva(0x04757F60)); }
    namespace InvocationExpression3 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression3__Class** type_info = (::app::InvocationExpression3__Class**)(modloader::win::memory::resolve_rva(0x0472E3F0)); }
    namespace InvocationExpression4 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression4__Class** type_info = (::app::InvocationExpression4__Class**)(modloader::win::memory::resolve_rva(0x04742198)); }
    namespace InvocationExpression5 { IL2CPP_MODLOADER_DLLEXPORT ::app::InvocationExpression5__Class** type_info = (::app::InvocationExpression5__Class**)(modloader::win::memory::resolve_rva(0x0473F4C0)); }
    namespace PropertyExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyExpression__Class** type_info = (::app::PropertyExpression__Class**)(modloader::win::memory::resolve_rva(0x0475DBE8)); }
    namespace FieldExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::FieldExpression__Class** type_info = (::app::FieldExpression__Class**)(modloader::win::memory::resolve_rva(0x04751340)); }
    namespace MethodCallExpressionN { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpressionN__Class** type_info = (::app::MethodCallExpressionN__Class**)(modloader::win::memory::resolve_rva(0x04781D50)); }
    namespace InstanceMethodCallExpressionN { IL2CPP_MODLOADER_DLLEXPORT ::app::InstanceMethodCallExpressionN__Class** type_info = (::app::InstanceMethodCallExpressionN__Class**)(modloader::win::memory::resolve_rva(0x04721278)); }
    namespace MethodCallExpression0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression0__Class** type_info = (::app::MethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x04709F10)); }
    namespace MethodCallExpression1 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression1__Class** type_info = (::app::MethodCallExpression1__Class**)(modloader::win::memory::resolve_rva(0x0477FFA0)); }
    namespace MethodCallExpression2 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression2__Class** type_info = (::app::MethodCallExpression2__Class**)(modloader::win::memory::resolve_rva(0x04733190)); }
    namespace MethodCallExpression3 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression3__Class** type_info = (::app::MethodCallExpression3__Class**)(modloader::win::memory::resolve_rva(0x04767BC0)); }
    namespace MethodCallExpression4 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression4__Class** type_info = (::app::MethodCallExpression4__Class**)(modloader::win::memory::resolve_rva(0x0478DC48)); }
    namespace MethodCallExpression5 { IL2CPP_MODLOADER_DLLEXPORT ::app::MethodCallExpression5__Class** type_info = (::app::MethodCallExpression5__Class**)(modloader::win::memory::resolve_rva(0x04752F18)); }
    namespace InstanceMethodCallExpression0 { IL2CPP_MODLOADER_DLLEXPORT ::app::InstanceMethodCallExpression0__Class** type_info = (::app::InstanceMethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x0471C820)); }
    namespace InstanceMethodCallExpression1 { IL2CPP_MODLOADER_DLLEXPORT ::app::InstanceMethodCallExpression1__Class** type_info = (::app::InstanceMethodCallExpression1__Class**)(modloader::win::memory::resolve_rva(0x04747960)); }
    namespace InstanceMethodCallExpression2 { IL2CPP_MODLOADER_DLLEXPORT ::app::InstanceMethodCallExpression2__Class** type_info = (::app::InstanceMethodCallExpression2__Class**)(modloader::win::memory::resolve_rva(0x04731650)); }
    namespace InstanceMethodCallExpression3 { IL2CPP_MODLOADER_DLLEXPORT ::app::InstanceMethodCallExpression3__Class** type_info = (::app::InstanceMethodCallExpression3__Class**)(modloader::win::memory::resolve_rva(0x0470F010)); }
    namespace NewArrayInitExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayInitExpression__Class** type_info = (::app::NewArrayInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0476A0A8)); }
    namespace NewArrayBoundsExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayBoundsExpression__Class** type_info = (::app::NewArrayBoundsExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FBA8)); }
    namespace TypedParameterExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::TypedParameterExpression__Class** type_info = (::app::TypedParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x0472CB98)); }
    namespace ByRefParameterExpression { IL2CPP_MODLOADER_DLLEXPORT ::app::ByRefParameterExpression__Class** type_info = (::app::ByRefParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x0473F498)); }
    namespace StackGuard_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::StackGuard_1__Class** type_info = (::app::StackGuard_1__Class**)(modloader::win::memory::resolve_rva(0x047880B0)); }
    namespace AddInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction__Class** type_info = (::app::AddInstruction__Class**)(modloader::win::memory::resolve_rva(0x04794DC8)); }
    namespace AddInstruction_AddInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddInt16__Class** type_info = (::app::AddInstruction_AddInt16__Class**)(modloader::win::memory::resolve_rva(0x0475E590)); }
    namespace InterpretedFrame { IL2CPP_MODLOADER_DLLEXPORT ::app::InterpretedFrame__Class** type_info = (::app::InterpretedFrame__Class**)(modloader::win::memory::resolve_rva(0x04707488)); }
    namespace InstructionArray { IL2CPP_MODLOADER_DLLEXPORT ::app::InstructionArray__Class** type_info = (::app::InstructionArray__Class**)(modloader::win::memory::resolve_rva(0x0476ACE8)); }
    namespace Interpreter { IL2CPP_MODLOADER_DLLEXPORT ::app::Interpreter__Class** type_info = (::app::Interpreter__Class**)(modloader::win::memory::resolve_rva(0x04733540)); }
    namespace Instruction__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Instruction__Array__Class** type_info = (::app::Instruction__Array__Class**)(modloader::win::memory::resolve_rva(0x04799920)); }
    namespace RuntimeLabel__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeLabel__Array__Class** type_info = (::app::RuntimeLabel__Array__Class**)(modloader::win::memory::resolve_rva(0x0475F670)); }
    namespace DebugInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugInfo__Class** type_info = (::app::DebugInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C2B0)); }
    namespace DebugInfo_DebugInfoComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugInfo_DebugInfoComparer__Class** type_info = (::app::DebugInfo_DebugInfoComparer__Class**)(modloader::win::memory::resolve_rva(0x047020C0)); }
    namespace LocalVariable { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalVariable__Class** type_info = (::app::LocalVariable__Class**)(modloader::win::memory::resolve_rva(0x04711D20)); }
    namespace IStrongBox { IL2CPP_MODLOADER_DLLEXPORT ::app::IStrongBox__Class** type_info = (::app::IStrongBox__Class**)(modloader::win::memory::resolve_rva(0x0475EFA0)); }
    namespace IStrongBox__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IStrongBox__Array__Class** type_info = (::app::IStrongBox__Array__Class**)(modloader::win::memory::resolve_rva(0x04737F70)); }
    namespace AddInstruction_AddInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddInt32__Class** type_info = (::app::AddInstruction_AddInt32__Class**)(modloader::win::memory::resolve_rva(0x0475D6C8)); }
    namespace AddInstruction_AddInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddInt64__Class** type_info = (::app::AddInstruction_AddInt64__Class**)(modloader::win::memory::resolve_rva(0x04710318)); }
    namespace AddInstruction_AddUInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddUInt16__Class** type_info = (::app::AddInstruction_AddUInt16__Class**)(modloader::win::memory::resolve_rva(0x0471CC50)); }
    namespace AddInstruction_AddUInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddUInt32__Class** type_info = (::app::AddInstruction_AddUInt32__Class**)(modloader::win::memory::resolve_rva(0x04792D28)); }
    namespace AddInstruction_AddUInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddUInt64__Class** type_info = (::app::AddInstruction_AddUInt64__Class**)(modloader::win::memory::resolve_rva(0x04707A40)); }
    namespace AddInstruction_AddSingle { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddSingle__Class** type_info = (::app::AddInstruction_AddSingle__Class**)(modloader::win::memory::resolve_rva(0x0470F040)); }
    namespace AddInstruction_AddDouble { IL2CPP_MODLOADER_DLLEXPORT ::app::AddInstruction_AddDouble__Class** type_info = (::app::AddInstruction_AddDouble__Class**)(modloader::win::memory::resolve_rva(0x04754388)); }
    namespace AddOvfInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction__Class** type_info = (::app::AddOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x04790DF0)); }
    namespace AddOvfInstruction_AddOvfInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfInt16__Class** type_info = (::app::AddOvfInstruction_AddOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x047225F8)); }
    namespace AddOvfInstruction_AddOvfInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfInt32__Class** type_info = (::app::AddOvfInstruction_AddOvfInt32__Class**)(modloader::win::memory::resolve_rva(0x0475CD58)); }
    namespace AddOvfInstruction_AddOvfInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfInt64__Class** type_info = (::app::AddOvfInstruction_AddOvfInt64__Class**)(modloader::win::memory::resolve_rva(0x0476BB78)); }
    namespace AddOvfInstruction_AddOvfUInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfUInt16__Class** type_info = (::app::AddOvfInstruction_AddOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x04769950)); }
    namespace AddOvfInstruction_AddOvfUInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfUInt32__Class** type_info = (::app::AddOvfInstruction_AddOvfUInt32__Class**)(modloader::win::memory::resolve_rva(0x047445D8)); }
    namespace AddOvfInstruction_AddOvfUInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AddOvfInstruction_AddOvfUInt64__Class** type_info = (::app::AddOvfInstruction_AddOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x047879F8)); }
    namespace AndInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction__Class** type_info = (::app::AndInstruction__Class**)(modloader::win::memory::resolve_rva(0x04721D50)); }
    namespace AndInstruction_AndSByte { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndSByte__Class** type_info = (::app::AndInstruction_AndSByte__Class**)(modloader::win::memory::resolve_rva(0x04793138)); }
    namespace AndInstruction_AndInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndInt16__Class** type_info = (::app::AndInstruction_AndInt16__Class**)(modloader::win::memory::resolve_rva(0x0475D1A8)); }
    namespace AndInstruction_AndInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndInt32__Class** type_info = (::app::AndInstruction_AndInt32__Class**)(modloader::win::memory::resolve_rva(0x0474B9B0)); }
    namespace AndInstruction_AndInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndInt64__Class** type_info = (::app::AndInstruction_AndInt64__Class**)(modloader::win::memory::resolve_rva(0x04787DD8)); }
    namespace AndInstruction_AndByte { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndByte__Class** type_info = (::app::AndInstruction_AndByte__Class**)(modloader::win::memory::resolve_rva(0x04701308)); }
    namespace AndInstruction_AndUInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndUInt16__Class** type_info = (::app::AndInstruction_AndUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475DE00)); }
    namespace AndInstruction_AndUInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndUInt32__Class** type_info = (::app::AndInstruction_AndUInt32__Class**)(modloader::win::memory::resolve_rva(0x04774FD8)); }
    namespace AndInstruction_AndUInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndUInt64__Class** type_info = (::app::AndInstruction_AndUInt64__Class**)(modloader::win::memory::resolve_rva(0x04757A48)); }
    namespace AndInstruction_AndBoolean { IL2CPP_MODLOADER_DLLEXPORT ::app::AndInstruction_AndBoolean__Class** type_info = (::app::AndInstruction_AndBoolean__Class**)(modloader::win::memory::resolve_rva(0x0470E978)); }
    namespace NewArrayInitInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayInitInstruction__Class** type_info = (::app::NewArrayInitInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754C68)); }
    namespace NewArrayInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayInstruction__Class** type_info = (::app::NewArrayInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476B9C0)); }
    namespace NewArrayBoundsInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::NewArrayBoundsInstruction__Class** type_info = (::app::NewArrayBoundsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04761080)); }
    namespace GetArrayItemInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::GetArrayItemInstruction__Class** type_info = (::app::GetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754FB0)); }
    namespace SetArrayItemInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::SetArrayItemInstruction__Class** type_info = (::app::SetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04704F50)); }
    namespace ArrayLengthInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayLengthInstruction__Class** type_info = (::app::ArrayLengthInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744FE0)); }
}
