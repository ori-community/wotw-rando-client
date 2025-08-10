#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Dictionary_2_Syste_Int_Mo_NewSetupStateControllerResolv_IRuntimeUberStateControllerDataLi_.h>
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
#include <Modloader/app/structs/NewSetupStateControllerResolver.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Moon::NewSetupStateControllerResolver {
    IL2CPP_REGISTER_METHOD(
        0x002FB950,
        app::Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_*,
        get_DataLinks,
        app::NewSetupStateControllerResolver* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01B63530, void, OnBeforeSerialize, app::NewSetupStateControllerResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, app::NewSetupStateControllerResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B63960, void, RebuildDataLinks, app::NewSetupStateControllerResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B63C00,
        app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink*,
        CreateRuntimeUberStateControllerDataLinkFromData,
        app::NewSetupStateControllerResolver* this_ptr,
        app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData* data
    )
    IL2CPP_REGISTER_METHOD(0x01B64150, void, ctor, app::NewSetupStateControllerResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B64500, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        app::Object*,
        ResolveSource_1,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_1,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(0x01B33090, bool, DoesDataLinkForTypeExist_1, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(
        0x015F27B0,
        app::Object*,
        GetValueForDataLink_1,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_1,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Object_*,
        GetProxyType_1,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Boolean_*,
        GetProxyType_2,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Byte_*,
        GetProxyType_3,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Char_*,
        GetProxyType_4,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Double_*,
        GetProxyType_5,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Int16_*,
        GetProxyType_6,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Int32_*,
        GetProxyType_7,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Int64_*,
        GetProxyType_8,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_System_Single_*,
        GetProxyType_9,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Bounds_*,
        GetProxyType_10,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Color32_*,
        GetProxyType_11,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Color_*,
        GetProxyType_12,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Matrix4x4_*,
        GetProxyType_13,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Quaternion_*,
        GetProxyType_14,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Vector2_*,
        GetProxyType_15,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Vector3_*,
        GetProxyType_16,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IMoonType_1_UnityEngine_Vector4_*,
        GetProxyType_17,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_2,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_3,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_4,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_5,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_6,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_7,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_8,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_9,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_10,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_11,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_12,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_13,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_14,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_15,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_16,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015EF770,
        bool,
        CanResolveSource_17,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(0x01B32060, bool, DoesDataLinkForTypeExist_2, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B322B0, bool, DoesDataLinkForTypeExist_3, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B32500, bool, DoesDataLinkForTypeExist_4, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B32750, bool, DoesDataLinkForTypeExist_5, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B329A0, bool, DoesDataLinkForTypeExist_6, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B32BF0, bool, DoesDataLinkForTypeExist_7, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B32E40, bool, DoesDataLinkForTypeExist_8, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B332E0, bool, DoesDataLinkForTypeExist_9, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B33530, bool, DoesDataLinkForTypeExist_10, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B33780, bool, DoesDataLinkForTypeExist_11, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B339D0, bool, DoesDataLinkForTypeExist_12, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B33C20, bool, DoesDataLinkForTypeExist_13, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B33E70, bool, DoesDataLinkForTypeExist_14, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B340C0, bool, DoesDataLinkForTypeExist_15, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B34310, bool, DoesDataLinkForTypeExist_16, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(0x01B34560, bool, DoesDataLinkForTypeExist_17, app::NewSetupStateControllerResolver* this_ptr, int32_t guid)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_2,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_3,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_4,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_5,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_6,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_7,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_8,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_9,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_10,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_11,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_12,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_13,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_14,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_15,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_16,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IsMoonTypeProxy_17,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1EF0,
        bool,
        GetValueForDataLink_2,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2030,
        uint8_t,
        GetValueForDataLink_3,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2170,
        char16_t,
        GetValueForDataLink_4,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F22B0,
        double,
        GetValueForDataLink_5,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F23F0,
        int16_t,
        GetValueForDataLink_6,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2530,
        int32_t,
        GetValueForDataLink_7,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2670,
        int64_t,
        GetValueForDataLink_8,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F28F0,
        float,
        GetValueForDataLink_9,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2A30,
        app::Bounds,
        GetValueForDataLink_10,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2BA0,
        app::Color32,
        GetValueForDataLink_11,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2CE0,
        app::Color,
        GetValueForDataLink_12,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2E40,
        app::Matrix4x4,
        GetValueForDataLink_13,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F2FD0,
        app::Quaternion,
        GetValueForDataLink_14,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F3130,
        app::Vector2,
        GetValueForDataLink_15,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F3270,
        app::Vector3,
        GetValueForDataLink_16,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F33E0,
        app::Vector4,
        GetValueForDataLink_17,
        app::NewSetupStateControllerResolver* this_ptr,
        int32_t guid,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        bool,
        ResolveSource_2,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        uint8_t,
        ResolveSource_3,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        char16_t,
        ResolveSource_4,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        double,
        ResolveSource_5,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        int16_t,
        ResolveSource_6,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        int32_t,
        ResolveSource_7,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        int64_t,
        ResolveSource_8,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        float,
        ResolveSource_9,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1200,
        app::Bounds,
        ResolveSource_10,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        app::Color32,
        ResolveSource_11,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1260,
        app::Color,
        ResolveSource_12,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F12B0,
        app::Matrix4x4,
        ResolveSource_13,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1260,
        app::Quaternion,
        ResolveSource_14,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F11D0,
        app::Vector2,
        ResolveSource_15,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1310,
        app::Vector3,
        ResolveSource_16,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
    IL2CPP_REGISTER_METHOD(
        0x015F1260,
        app::Vector4,
        ResolveSource_17,
        app::NewSetupStateControllerResolver* this_ptr,
        app::IMoonResolverContext* context,
        app::MoonTypeExtraData resolver_extra_data
    )
} // namespace app::classes::Moon::NewSetupStateControllerResolver
