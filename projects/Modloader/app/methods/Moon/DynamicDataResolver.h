#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IMoonType_1_System_Boolean_.h>
#include <Modloader/app/structs/IMoonType_1_System_Byte_.h>
#include <Modloader/app/structs/IMoonType_1_System_Char_.h>
#include <Modloader/app/structs/IMoonType_1_System_Double_.h>
#include <Modloader/app/structs/IMoonType_1_System_Int16_.h>
#include <Modloader/app/structs/IMoonType_1_System_Int32_.h>
#include <Modloader/app/structs/IMoonType_1_System_Int64_.h>
#include <Modloader/app/structs/IMoonType_1_System_Object_.h>
#include <Modloader/app/structs/IMoonType_1_System_Single_.h>
#include <Modloader/app/structs/IMoonType_1_System_String_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Matrix4x4_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonTypeExtraData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Moon::DynamicDataResolver {
    IL2CPP_REGISTER_METHOD(0x02F8DF20, void, OnBeforeSerialize, (app::DynamicDataResolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8E390, void, OnAfterDeserialize, (app::DynamicDataResolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8E830, void, ctor, (app::DynamicDataResolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F11D0, app::Object*, ResolveSource_1, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_1, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x01B30DA0, bool, DoesDataLinkForTypeExist_1, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x015F0440, app::Object*, GetValueForDataLink_1, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_1, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Object_*, GetProxyType_1, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_2, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_3, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_4, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_5, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_6, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_7, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_8, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_9, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_10, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_11, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_12, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_13, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_14, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_15, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_16, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_17, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Boolean_*, GetProxyType_2, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Int32_*, GetProxyType_3, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Single_*, GetProxyType_4, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Int16_*, GetProxyType_5, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Int64_*, GetProxyType_6, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Double_*, GetProxyType_7, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Quaternion_*, GetProxyType_8, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Matrix4x4_*, GetProxyType_9, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_String_*, GetProxyType_10, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Char_*, GetProxyType_11, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Bounds_*, GetProxyType_12, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Color_*, GetProxyType_13, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Color32_*, GetProxyType_14, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Vector2_*, GetProxyType_15, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Vector3_*, GetProxyType_16, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_UnityEngine_Vector4_*, GetProxyType_17, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Byte_*, GetProxyType_18, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_2, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_3, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_4, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_5, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_6, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_7, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_8, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_9, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_10, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_11, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_12, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_13, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_14, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_15, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_16, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, CanResolveSource_17, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3390, bool, DoesDataLinkForTypeExist_2, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30560, bool, DoesDataLinkForTypeExist_3, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B306C0, bool, DoesDataLinkForTypeExist_4, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30820, bool, DoesDataLinkForTypeExist_5, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30980, bool, DoesDataLinkForTypeExist_6, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30AE0, bool, DoesDataLinkForTypeExist_7, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30C40, bool, DoesDataLinkForTypeExist_8, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B30F00, bool, DoesDataLinkForTypeExist_9, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B31060, bool, DoesDataLinkForTypeExist_10, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B311C0, bool, DoesDataLinkForTypeExist_11, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B31320, bool, DoesDataLinkForTypeExist_12, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B31480, bool, DoesDataLinkForTypeExist_13, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B315E0, bool, DoesDataLinkForTypeExist_14, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B31740, bool, DoesDataLinkForTypeExist_15, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B318A0, bool, DoesDataLinkForTypeExist_16, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B31A00, bool, DoesDataLinkForTypeExist_17, (app::DynamicDataResolver * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsMoonTypeProxy_18, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EFB80, bool, GetValueForDataLink_2, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015EFCC0, uint8_t, GetValueForDataLink_3, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015EFE00, char16_t, GetValueForDataLink_4, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015EFF40, double, GetValueForDataLink_5, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0080, int16_t, GetValueForDataLink_6, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F01C0, int32_t, GetValueForDataLink_7, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0300, int64_t, GetValueForDataLink_8, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0580, float, GetValueForDataLink_9, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F06C0, app::Bounds, GetValueForDataLink_10, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0830, app::Color32, GetValueForDataLink_11, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0970, app::Color, GetValueForDataLink_12, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0AD0, app::Matrix4x4, GetValueForDataLink_13, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0C60, app::Quaternion, GetValueForDataLink_14, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0DC0, app::Vector2, GetValueForDataLink_15, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F0F00, app::Vector3, GetValueForDataLink_16, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F1070, app::Vector4, GetValueForDataLink_17, (app::DynamicDataResolver * this_ptr, int32_t guid, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x015F11D0, bool, ResolveSource_2, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, uint8_t, ResolveSource_3, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, char16_t, ResolveSource_4, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, double, ResolveSource_5, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, int16_t, ResolveSource_6, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, int32_t, ResolveSource_7, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, int64_t, ResolveSource_8, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, float, ResolveSource_9, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F1200, app::Bounds, ResolveSource_10, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, app::Color32, ResolveSource_11, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F1260, app::Color, ResolveSource_12, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F12B0, app::Matrix4x4, ResolveSource_13, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F1260, app::Quaternion, ResolveSource_14, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F11D0, app::Vector2, ResolveSource_15, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F1310, app::Vector3, ResolveSource_16, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015F1260, app::Vector4, ResolveSource_17, (app::DynamicDataResolver * this_ptr, app::IMoonResolverContext* context, app::MoonTypeExtraData resolver_extra_data))
} // namespace app::classes::Moon::DynamicDataResolver
