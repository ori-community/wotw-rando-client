#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubInt32.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubInt64.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubUInt16.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubUInt32.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubUInt64.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubSingle.h>
#include <Il2CppModLoader/app/types/SubInstruction_SubDouble.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfInt16.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfInt32.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfInt64.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfUInt16.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfUInt32.h>
#include <Il2CppModLoader/app/types/SubOvfInstruction_SubOvfUInt64.h>
#include <Il2CppModLoader/app/types/CreateDelegateInstruction.h>
#include <Il2CppModLoader/app/types/TypeIsInstruction.h>
#include <Il2CppModLoader/app/types/TypeAsInstruction.h>
#include <Il2CppModLoader/app/types/TypeEqualsInstruction.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_HasValue.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_GetValue.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_GetValueOrDefault.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_GetValueOrDefault1.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_EqualsClass.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_ToStringClass.h>
#include <Il2CppModLoader/app/types/NullableMethodCallInstruction_GetHashCodeClass.h>
#include <Il2CppModLoader/app/types/CastInstruction.h>
#include <Il2CppModLoader/app/types/CastInstruction_CastInstructionNoT_Ref.h>
#include <Il2CppModLoader/app/types/CastInstruction_CastInstructionNoT_Value.h>
#include <Il2CppModLoader/app/types/CastToEnumInstruction.h>
#include <Il2CppModLoader/app/types/CastReferenceToEnumInstruction.h>
#include <Il2CppModLoader/app/types/QuoteInstruction.h>
#include <Il2CppModLoader/app/types/QuoteInstruction_ExpressionQuoter.h>
#include <Il2CppModLoader/app/types/DelegateHelpers_c.h>
#include <Il2CppModLoader/app/types/DelegateHelpers_TypeInfo.h>
#include <Il2CppModLoader/app/types/ExpandoObject.h>
#include <Il2CppModLoader/app/types/ExpandoObject_ExpandoData.h>
#include <Il2CppModLoader/app/types/ExpandoClass.h>
#include <Il2CppModLoader/app/types/DynamicMetaObject.h>
#include <Il2CppModLoader/app/types/DynamicMetaObject__Array.h>
#include <Il2CppModLoader/app/types/BindingRestrictions.h>
#include <Il2CppModLoader/app/types/BindingRestrictions_MergedRestriction.h>
#include <Il2CppModLoader/app/types/CallSiteBinder.h>
#include <Il2CppModLoader/app/types/GetMemberBinder.h>
#include <Il2CppModLoader/app/types/NoThrowGetBinderMember.h>
#include <Il2CppModLoader/app/types/SetMemberBinder.h>
#include <Il2CppModLoader/app/types/NoThrowSetBinderMember.h>
#include <Il2CppModLoader/app/types/RuntimeOps_MergedRuntimeVariables.h>
#include <Il2CppModLoader/app/types/RuntimeOps_RuntimeVariables.h>
#include <Il2CppModLoader/app/types/BindingRestrictions_TestBuilder.h>
#include <Il2CppModLoader/app/types/BindingRestrictions_CustomRestriction.h>
#include <Il2CppModLoader/app/types/BindingRestrictions_TypeRestriction.h>
#include <Il2CppModLoader/app/types/BindingRestrictions_InstanceRestriction.h>
#include <Il2CppModLoader/app/types/ExpandoObject_KeyCollection.h>
#include <Il2CppModLoader/app/types/ExpandoObject_KeyCollection_GetEnumerator_d_15.h>
#include <Il2CppModLoader/app/types/ExpandoObject_ValueCollection.h>
#include <Il2CppModLoader/app/types/ExpandoObject_ValueCollection_GetEnumerator_d_15.h>
#include <Il2CppModLoader/app/types/ExpandoObject_MetaExpando.h>
#include <Il2CppModLoader/app/types/ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6.h>
#include <Il2CppModLoader/app/types/ExpandoObject_GetExpandoEnumerator_d_51.h>
#include <Il2CppModLoader/app/types/ListArgumentProvider.h>
#include <Il2CppModLoader/app/types/ListParameterProvider.h>
#include <Il2CppModLoader/app/types/Keyframe.h>
#include <Il2CppModLoader/app/types/AnimationCurve.h>
#include <Il2CppModLoader/app/types/Keyframe__Array.h>
#include <Il2CppModLoader/app/types/Application_NvnBufferUsage__Enum.h>
#include <Il2CppModLoader/app/types/RuntimePlatform__Enum.h>
#include <Il2CppModLoader/app/types/SystemLanguage__Enum.h>
#include <Il2CppModLoader/app/types/ThreadPriority__Enum_1.h>
#include <Il2CppModLoader/app/types/Application_LogCallback.h>
#include <Il2CppModLoader/app/types/LogType__Enum.h>
#include <Il2CppModLoader/app/types/AsyncGPUReadbackRequest.h>
#include <Il2CppModLoader/app/types/Object_1.h>
#include <Il2CppModLoader/app/types/Texture.h>
#include <Il2CppModLoader/app/types/Component_1.h>
#include <Il2CppModLoader/app/types/Behaviour.h>
#include <Il2CppModLoader/app/types/Transform.h>
#include <Il2CppModLoader/app/types/GameObject.h>
#include <Il2CppModLoader/app/types/BootConfigData.h>
#include <Il2CppModLoader/app/types/Vector3.h>
#include <Il2CppModLoader/app/types/Bounds.h>
#include <Il2CppModLoader/app/types/Ray.h>
#include <Il2CppModLoader/app/types/Camera.h>
#include <Il2CppModLoader/app/types/Matrix4x4.h>
#include <Il2CppModLoader/app/types/Color.h>
#include <Il2CppModLoader/app/types/Vector2.h>
#include <Il2CppModLoader/app/types/Rect.h>
#include <Il2CppModLoader/app/types/RenderTexture.h>
#include <Il2CppModLoader/app/types/RenderBuffer__Array.h>
#include <Il2CppModLoader/app/types/Vector4.h>
#include <Il2CppModLoader/app/types/Vector3__Array.h>
#include <Il2CppModLoader/app/types/Scene.h>
#include <Il2CppModLoader/app/types/Camera__Array.h>
#include <Il2CppModLoader/app/types/CommandBuffer.h>
#include <Il2CppModLoader/app/types/CommandBuffer__Array.h>
#include <Il2CppModLoader/app/types/Color32.h>
#include <Il2CppModLoader/app/types/Component_1__Array.h>
#include <Il2CppModLoader/app/types/ComputeBuffer.h>
#include <Il2CppModLoader/app/types/CullingGroup_StateChanged.h>
#include <Il2CppModLoader/app/types/CullingGroupEvent.h>

namespace app::classes::types {
    namespace SubInstruction_SubInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubInt32__Class** type_info = (::app::SubInstruction_SubInt32__Class**)(modloader::win::memory::resolve_rva(0x04758DE8)); }
    namespace SubInstruction_SubInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubInt64__Class** type_info = (::app::SubInstruction_SubInt64__Class**)(modloader::win::memory::resolve_rva(0x04744FF0)); }
    namespace SubInstruction_SubUInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubUInt16__Class** type_info = (::app::SubInstruction_SubUInt16__Class**)(modloader::win::memory::resolve_rva(0x047101C8)); }
    namespace SubInstruction_SubUInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubUInt32__Class** type_info = (::app::SubInstruction_SubUInt32__Class**)(modloader::win::memory::resolve_rva(0x04739AC0)); }
    namespace SubInstruction_SubUInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubUInt64__Class** type_info = (::app::SubInstruction_SubUInt64__Class**)(modloader::win::memory::resolve_rva(0x0472F848)); }
    namespace SubInstruction_SubSingle { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubSingle__Class** type_info = (::app::SubInstruction_SubSingle__Class**)(modloader::win::memory::resolve_rva(0x0475C600)); }
    namespace SubInstruction_SubDouble { IL2CPP_MODLOADER_DLLEXPORT ::app::SubInstruction_SubDouble__Class** type_info = (::app::SubInstruction_SubDouble__Class**)(modloader::win::memory::resolve_rva(0x0476D858)); }
    namespace SubOvfInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction__Class** type_info = (::app::SubOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x047776F8)); }
    namespace SubOvfInstruction_SubOvfInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfInt16__Class** type_info = (::app::SubOvfInstruction_SubOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x047127D8)); }
    namespace SubOvfInstruction_SubOvfInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfInt32__Class** type_info = (::app::SubOvfInstruction_SubOvfInt32__Class**)(modloader::win::memory::resolve_rva(0x04729870)); }
    namespace SubOvfInstruction_SubOvfInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfInt64__Class** type_info = (::app::SubOvfInstruction_SubOvfInt64__Class**)(modloader::win::memory::resolve_rva(0x04706410)); }
    namespace SubOvfInstruction_SubOvfUInt16 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfUInt16__Class** type_info = (::app::SubOvfInstruction_SubOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475F8D0)); }
    namespace SubOvfInstruction_SubOvfUInt32 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfUInt32__Class** type_info = (::app::SubOvfInstruction_SubOvfUInt32__Class**)(modloader::win::memory::resolve_rva(0x0478D6E0)); }
    namespace SubOvfInstruction_SubOvfUInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::SubOvfInstruction_SubOvfUInt64__Class** type_info = (::app::SubOvfInstruction_SubOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CED8)); }
    namespace CreateDelegateInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::CreateDelegateInstruction__Class** type_info = (::app::CreateDelegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04768940)); }
    namespace TypeIsInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeIsInstruction__Class** type_info = (::app::TypeIsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04770DF0)); }
    namespace TypeAsInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeAsInstruction__Class** type_info = (::app::TypeAsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04740C88)); }
    namespace TypeEqualsInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeEqualsInstruction__Class** type_info = (::app::TypeEqualsInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472EE98)); }
    namespace NullableMethodCallInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction__Class** type_info = (::app::NullableMethodCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472FC98)); }
    namespace NullableMethodCallInstruction_HasValue { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_HasValue__Class** type_info = (::app::NullableMethodCallInstruction_HasValue__Class**)(modloader::win::memory::resolve_rva(0x0470E5B0)); }
    namespace NullableMethodCallInstruction_GetValue { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_GetValue__Class** type_info = (::app::NullableMethodCallInstruction_GetValue__Class**)(modloader::win::memory::resolve_rva(0x04731A18)); }
    namespace NullableMethodCallInstruction_GetValueOrDefault { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_GetValueOrDefault__Class** type_info = (::app::NullableMethodCallInstruction_GetValueOrDefault__Class**)(modloader::win::memory::resolve_rva(0x047129C8)); }
    namespace NullableMethodCallInstruction_GetValueOrDefault1 { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_GetValueOrDefault1__Class** type_info = (::app::NullableMethodCallInstruction_GetValueOrDefault1__Class**)(modloader::win::memory::resolve_rva(0x04787F08)); }
    namespace NullableMethodCallInstruction_EqualsClass { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_EqualsClass__Class** type_info = (::app::NullableMethodCallInstruction_EqualsClass__Class**)(modloader::win::memory::resolve_rva(0x0475ECE0)); }
    namespace NullableMethodCallInstruction_ToStringClass { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_ToStringClass__Class** type_info = (::app::NullableMethodCallInstruction_ToStringClass__Class**)(modloader::win::memory::resolve_rva(0x04793318)); }
    namespace NullableMethodCallInstruction_GetHashCodeClass { IL2CPP_MODLOADER_DLLEXPORT ::app::NullableMethodCallInstruction_GetHashCodeClass__Class** type_info = (::app::NullableMethodCallInstruction_GetHashCodeClass__Class**)(modloader::win::memory::resolve_rva(0x0472CE18)); }
    namespace CastInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::CastInstruction__Class** type_info = (::app::CastInstruction__Class**)(modloader::win::memory::resolve_rva(0x047561F8)); }
    namespace CastInstruction_CastInstructionNoT_Ref { IL2CPP_MODLOADER_DLLEXPORT ::app::CastInstruction_CastInstructionNoT_Ref__Class** type_info = (::app::CastInstruction_CastInstructionNoT_Ref__Class**)(modloader::win::memory::resolve_rva(0x04713210)); }
    namespace CastInstruction_CastInstructionNoT_Value { IL2CPP_MODLOADER_DLLEXPORT ::app::CastInstruction_CastInstructionNoT_Value__Class** type_info = (::app::CastInstruction_CastInstructionNoT_Value__Class**)(modloader::win::memory::resolve_rva(0x04744C70)); }
    namespace CastToEnumInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::CastToEnumInstruction__Class** type_info = (::app::CastToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x04784540)); }
    namespace CastReferenceToEnumInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::CastReferenceToEnumInstruction__Class** type_info = (::app::CastReferenceToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478EB20)); }
    namespace QuoteInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::QuoteInstruction__Class** type_info = (::app::QuoteInstruction__Class**)(modloader::win::memory::resolve_rva(0x04749FF0)); }
    namespace QuoteInstruction_ExpressionQuoter { IL2CPP_MODLOADER_DLLEXPORT ::app::QuoteInstruction_ExpressionQuoter__Class** type_info = (::app::QuoteInstruction_ExpressionQuoter__Class**)(modloader::win::memory::resolve_rva(0x04741180)); }
    namespace DelegateHelpers_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DelegateHelpers_c__Class** type_info = (::app::DelegateHelpers_c__Class**)(modloader::win::memory::resolve_rva(0x0476EED0)); }
    namespace DelegateHelpers_TypeInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::DelegateHelpers_TypeInfo__Class** type_info = (::app::DelegateHelpers_TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B958)); }
    namespace ExpandoObject { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject__Class** type_info = (::app::ExpandoObject__Class**)(modloader::win::memory::resolve_rva(0x0473BA70)); }
    namespace ExpandoObject_ExpandoData { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_ExpandoData__Class** type_info = (::app::ExpandoObject_ExpandoData__Class**)(modloader::win::memory::resolve_rva(0x0471E138)); }
    namespace ExpandoClass { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoClass__Class** type_info = (::app::ExpandoClass__Class**)(modloader::win::memory::resolve_rva(0x0477A2E0)); }
    namespace DynamicMetaObject { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicMetaObject__Class** type_info = (::app::DynamicMetaObject__Class**)(modloader::win::memory::resolve_rva(0x04760D10)); }
    namespace DynamicMetaObject__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicMetaObject__Array__Class** type_info = (::app::DynamicMetaObject__Array__Class**)(modloader::win::memory::resolve_rva(0x047553A0)); }
    namespace BindingRestrictions { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions__Class** type_info = (::app::BindingRestrictions__Class**)(modloader::win::memory::resolve_rva(0x04755790)); }
    namespace BindingRestrictions_MergedRestriction { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions_MergedRestriction__Class** type_info = (::app::BindingRestrictions_MergedRestriction__Class**)(modloader::win::memory::resolve_rva(0x0476A228)); }
    namespace CallSiteBinder { IL2CPP_MODLOADER_DLLEXPORT ::app::CallSiteBinder__Class** type_info = (::app::CallSiteBinder__Class**)(modloader::win::memory::resolve_rva(0x0471AB58)); }
    namespace GetMemberBinder { IL2CPP_MODLOADER_DLLEXPORT ::app::GetMemberBinder__Class** type_info = (::app::GetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x047356A8)); }
    namespace NoThrowGetBinderMember { IL2CPP_MODLOADER_DLLEXPORT ::app::NoThrowGetBinderMember__Class** type_info = (::app::NoThrowGetBinderMember__Class**)(modloader::win::memory::resolve_rva(0x0471CD50)); }
    namespace SetMemberBinder { IL2CPP_MODLOADER_DLLEXPORT ::app::SetMemberBinder__Class** type_info = (::app::SetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x04719358)); }
    namespace NoThrowSetBinderMember { IL2CPP_MODLOADER_DLLEXPORT ::app::NoThrowSetBinderMember__Class** type_info = (::app::NoThrowSetBinderMember__Class**)(modloader::win::memory::resolve_rva(0x0470D120)); }
    namespace RuntimeOps_MergedRuntimeVariables { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeOps_MergedRuntimeVariables__Class** type_info = (::app::RuntimeOps_MergedRuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x04715990)); }
    namespace RuntimeOps_RuntimeVariables { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeOps_RuntimeVariables__Class** type_info = (::app::RuntimeOps_RuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x04701718)); }
    namespace BindingRestrictions_TestBuilder { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions_TestBuilder__Class** type_info = (::app::BindingRestrictions_TestBuilder__Class**)(modloader::win::memory::resolve_rva(0x04762368)); }
    namespace BindingRestrictions_CustomRestriction { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions_CustomRestriction__Class** type_info = (::app::BindingRestrictions_CustomRestriction__Class**)(modloader::win::memory::resolve_rva(0x04751148)); }
    namespace BindingRestrictions_TypeRestriction { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions_TypeRestriction__Class** type_info = (::app::BindingRestrictions_TypeRestriction__Class**)(modloader::win::memory::resolve_rva(0x04789188)); }
    namespace BindingRestrictions_InstanceRestriction { IL2CPP_MODLOADER_DLLEXPORT ::app::BindingRestrictions_InstanceRestriction__Class** type_info = (::app::BindingRestrictions_InstanceRestriction__Class**)(modloader::win::memory::resolve_rva(0x047461F8)); }
    namespace ExpandoObject_KeyCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_KeyCollection__Class** type_info = (::app::ExpandoObject_KeyCollection__Class**)(modloader::win::memory::resolve_rva(0x0476FFB0)); }
    namespace ExpandoObject_KeyCollection_GetEnumerator_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class** type_info = (::app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class**)(modloader::win::memory::resolve_rva(0x0473B988)); }
    namespace ExpandoObject_ValueCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_ValueCollection__Class** type_info = (::app::ExpandoObject_ValueCollection__Class**)(modloader::win::memory::resolve_rva(0x047541E8)); }
    namespace ExpandoObject_ValueCollection_GetEnumerator_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class** type_info = (::app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class**)(modloader::win::memory::resolve_rva(0x047799B0)); }
    namespace ExpandoObject_MetaExpando { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_MetaExpando__Class** type_info = (::app::ExpandoObject_MetaExpando__Class**)(modloader::win::memory::resolve_rva(0x04706A38)); }
    namespace ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class** type_info = (::app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class**)(modloader::win::memory::resolve_rva(0x04795818)); }
    namespace ExpandoObject_GetExpandoEnumerator_d_51 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObject_GetExpandoEnumerator_d_51__Class** type_info = (::app::ExpandoObject_GetExpandoEnumerator_d_51__Class**)(modloader::win::memory::resolve_rva(0x04728E20)); }
    namespace ListArgumentProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ListArgumentProvider__Class** type_info = (::app::ListArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x04702408)); }
    namespace ListParameterProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ListParameterProvider__Class** type_info = (::app::ListParameterProvider__Class**)(modloader::win::memory::resolve_rva(0x0470D590)); }
    namespace Keyframe { IL2CPP_MODLOADER_DLLEXPORT ::app::Keyframe__Class** type_info = (::app::Keyframe__Class**)(modloader::win::memory::resolve_rva(0x0477E4B0)); }
    namespace AnimationCurve { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationCurve__Class** type_info = (::app::AnimationCurve__Class**)(modloader::win::memory::resolve_rva(0x047065A8)); }
    namespace Keyframe__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Keyframe__Array__Class** type_info = (::app::Keyframe__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C8E8)); }
    namespace Application_NvnBufferUsage__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Application_NvnBufferUsage__Enum__Class** type_info = (::app::Application_NvnBufferUsage__Enum__Class**)(modloader::win::memory::resolve_rva(0x047070E8)); }
    namespace RuntimePlatform__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimePlatform__Enum__Class** type_info = (::app::RuntimePlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04735F10)); }
    namespace SystemLanguage__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SystemLanguage__Enum__Class** type_info = (::app::SystemLanguage__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CE88)); }
    namespace ThreadPriority__Enum_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ThreadPriority__Enum_1__Class** type_info = (::app::ThreadPriority__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04748450)); }
    namespace Application_LogCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::Application_LogCallback__Class** type_info = (::app::Application_LogCallback__Class**)(modloader::win::memory::resolve_rva(0x047985C0)); }
    namespace LogType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::LogType__Enum__Class** type_info = (::app::LogType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702988)); }
    namespace AsyncGPUReadbackRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncGPUReadbackRequest__Class** type_info = (::app::AsyncGPUReadbackRequest__Class**)(modloader::win::memory::resolve_rva(0x04735A08)); }
    namespace Object_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Object_1__Class** type_info = (::app::Object_1__Class**)(modloader::win::memory::resolve_rva(0x047766B8)); }
    namespace Texture { IL2CPP_MODLOADER_DLLEXPORT ::app::Texture__Class** type_info = (::app::Texture__Class**)(modloader::win::memory::resolve_rva(0x0477E450)); }
    namespace Component_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Component_1__Class** type_info = (::app::Component_1__Class**)(modloader::win::memory::resolve_rva(0x04776B98)); }
    namespace Behaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::Behaviour__Class** type_info = (::app::Behaviour__Class**)(modloader::win::memory::resolve_rva(0x0470C6F0)); }
    namespace Transform { IL2CPP_MODLOADER_DLLEXPORT ::app::Transform__Class** type_info = (::app::Transform__Class**)(modloader::win::memory::resolve_rva(0x04788B20)); }
    namespace GameObject { IL2CPP_MODLOADER_DLLEXPORT ::app::GameObject__Class** type_info = (::app::GameObject__Class**)(modloader::win::memory::resolve_rva(0x0472EF88)); }
    namespace BootConfigData { IL2CPP_MODLOADER_DLLEXPORT ::app::BootConfigData__Class** type_info = (::app::BootConfigData__Class**)(modloader::win::memory::resolve_rva(0x04746358)); }
    namespace Vector3 { IL2CPP_MODLOADER_DLLEXPORT ::app::Vector3__Class** type_info = (::app::Vector3__Class**)(modloader::win::memory::resolve_rva(0x04774AC8)); }
    namespace Bounds { IL2CPP_MODLOADER_DLLEXPORT ::app::Bounds__Class** type_info = (::app::Bounds__Class**)(modloader::win::memory::resolve_rva(0x047893A0)); }
    namespace Ray { IL2CPP_MODLOADER_DLLEXPORT ::app::Ray__Class** type_info = (::app::Ray__Class**)(modloader::win::memory::resolve_rva(0x04796040)); }
    namespace Camera { IL2CPP_MODLOADER_DLLEXPORT ::app::Camera__Class** type_info = (::app::Camera__Class**)(modloader::win::memory::resolve_rva(0x047639B8)); }
    namespace Matrix4x4 { IL2CPP_MODLOADER_DLLEXPORT ::app::Matrix4x4__Class** type_info = (::app::Matrix4x4__Class**)(modloader::win::memory::resolve_rva(0x0470EE60)); }
    namespace Color { IL2CPP_MODLOADER_DLLEXPORT ::app::Color__Class** type_info = (::app::Color__Class**)(modloader::win::memory::resolve_rva(0x0473C110)); }
    namespace Vector2 { IL2CPP_MODLOADER_DLLEXPORT ::app::Vector2__Class** type_info = (::app::Vector2__Class**)(modloader::win::memory::resolve_rva(0x04736248)); }
    namespace Rect { IL2CPP_MODLOADER_DLLEXPORT ::app::Rect__Class** type_info = (::app::Rect__Class**)(modloader::win::memory::resolve_rva(0x0475B480)); }
    namespace RenderTexture { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTexture__Class** type_info = (::app::RenderTexture__Class**)(modloader::win::memory::resolve_rva(0x047058F8)); }
    namespace RenderBuffer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderBuffer__Array__Class** type_info = (::app::RenderBuffer__Array__Class**)(modloader::win::memory::resolve_rva(0x04729C28)); }
    namespace Vector4 { IL2CPP_MODLOADER_DLLEXPORT ::app::Vector4__Class** type_info = (::app::Vector4__Class**)(modloader::win::memory::resolve_rva(0x0473B200)); }
    namespace Vector3__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Vector3__Array__Class** type_info = (::app::Vector3__Array__Class**)(modloader::win::memory::resolve_rva(0x04759DE8)); }
    namespace Scene { IL2CPP_MODLOADER_DLLEXPORT ::app::Scene__Class** type_info = (::app::Scene__Class**)(modloader::win::memory::resolve_rva(0x0475CAF0)); }
    namespace Camera__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Camera__Array__Class** type_info = (::app::Camera__Array__Class**)(modloader::win::memory::resolve_rva(0x04713F10)); }
    namespace CommandBuffer { IL2CPP_MODLOADER_DLLEXPORT ::app::CommandBuffer__Class** type_info = (::app::CommandBuffer__Class**)(modloader::win::memory::resolve_rva(0x047309C0)); }
    namespace CommandBuffer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CommandBuffer__Array__Class** type_info = (::app::CommandBuffer__Array__Class**)(modloader::win::memory::resolve_rva(0x04703540)); }
    namespace Color32 { IL2CPP_MODLOADER_DLLEXPORT ::app::Color32__Class** type_info = (::app::Color32__Class**)(modloader::win::memory::resolve_rva(0x0474D978)); }
    namespace Component_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Component_1__Array__Class** type_info = (::app::Component_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04722620)); }
    namespace ComputeBuffer { IL2CPP_MODLOADER_DLLEXPORT ::app::ComputeBuffer__Class** type_info = (::app::ComputeBuffer__Class**)(modloader::win::memory::resolve_rva(0x047314C0)); }
    namespace CullingGroup_StateChanged { IL2CPP_MODLOADER_DLLEXPORT ::app::CullingGroup_StateChanged__Class** type_info = (::app::CullingGroup_StateChanged__Class**)(modloader::win::memory::resolve_rva(0x0476EF38)); }
    namespace CullingGroupEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::CullingGroupEvent__Class** type_info = (::app::CullingGroupEvent__Class**)(modloader::win::memory::resolve_rva(0x04740728)); }
}
