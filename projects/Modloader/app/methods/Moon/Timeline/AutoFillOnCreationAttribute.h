#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AutoFillOnCreationAttribute.h>
#include <Modloader/app/structs/AutoFillOnCreationAttribute_ResolveConflict__Enum.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/ITimelineEntityCreationListener.h>
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::Timeline::AutoFillOnCreationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::AutoFillOnCreationAttribute * this_ptr, app::AutoFillOnCreationAttribute_ResolveConflict__Enum resolve_conflict))
    IL2CPP_REGISTER_METHOD(0x01BB01E0, app::Object*, FindObjectOfType, (app::AutoFillOnCreationAttribute * this_ptr, app::List_1_UnityEngine_Object_* objects, app::Type* find_type))
    IL2CPP_REGISTER_METHOD(0x01BB0520, void, ProcessField, (app::ITimelineEntityCreationListener * owner, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x01552A30, void, ProcessClass_1, (app::Object * c))
    IL2CPP_REGISTER_METHOD(0x01552A30, void, ProcessClass_2, (app::ITimelineEntityCreationListener * c))
} // namespace app::classes::Moon::Timeline::AutoFillOnCreationAttribute
