#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeDescriptor_AttributeFilterCacheItem.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ICollection.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::TypeDescriptor_AttributeFilterCacheItem * this_ptr, app::Attribute__Array* filter, app::ICollection* filtered_members))
    IL2CPP_REGISTER_METHOD(0x02955FB0, bool, IsValid, (app::TypeDescriptor_AttributeFilterCacheItem * this_ptr, app::Attribute__Array* filter))
} // namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem
