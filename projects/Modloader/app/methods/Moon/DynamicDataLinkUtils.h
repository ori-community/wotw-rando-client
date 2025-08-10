#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicDataLinkSerializedData.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_DataTargetMemberType__Enum.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::DynamicDataLinkUtils {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x02F885A0, void, WarmAttributeCacheTestExternal, )
    IL2CPP_REGISTER_METHOD(0x02F886D0, void, WarmAttributeCache, )
    IL2CPP_REGISTER_METHOD(0x02F890F0, void, WarmPropertyCache, int32_t class_i_d, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02F8A060, app::IRuntimeDynamicDataLink*, CreateRuntimeDynamicDataLinkFromData, app::DynamicDataLinkSerializedData data)
    IL2CPP_REGISTER_METHOD(0x02F8A890, app::DynamicDataLinkUtils_InfoStruct, GetMemberInfoFromString_1, app::DynamicDataLinkSerializedData data)
    IL2CPP_REGISTER_METHOD(
        0x02F8AED0,
        app::DynamicDataLinkUtils_InfoStruct,
        GetMemberInfoFromString_2,
        app::DynamicDataLinkUtils_DataTargetMemberType__Enum member_type,
        app::Type* target_object_type,
        app::String* member_name
    )
    IL2CPP_REGISTER_METHOD(0x02F8B4B0, app::DynamicDataLinkUtils_InfoStruct, GetMemberInfoFromID, app::DynamicDataLinkSerializedData data)
    IL2CPP_REGISTER_METHOD(0x02F8BA70, bool, IsValidMethod, app::MethodInfo_1* method_info)
    IL2CPP_REGISTER_METHOD(0x02F8BBD0, app::Type*, HackGetType, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02F8BEF0, int32_t, GetClassID, app::Type* target_object_type, app::MemberInfo_1* target_member_info)
    IL2CPP_REGISTER_METHOD(0x02F8C1E0, int32_t, GetFieldID, app::Type* target_object_type, app::MemberInfo_1* target_member_info)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Moon::DynamicDataLinkUtils
