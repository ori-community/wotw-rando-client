#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeDescriptor_FilterCacheItem.h>
#include <Modloader/app/structs/ITypeDescriptorFilterService.h>
#include <Modloader/app/structs/ICollection.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_FilterCacheItem {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::TypeDescriptor_FilterCacheItem * this_ptr, app::ITypeDescriptorFilterService* filter_service, app::ICollection* filtered_members))
    IL2CPP_REGISTER_METHOD(0x01F0E420, bool, IsValid, (app::TypeDescriptor_FilterCacheItem * this_ptr, app::ITypeDescriptorFilterService* filter_service))
} // namespace app::classes::System::ComponentModel::TypeDescriptor_FilterCacheItem
