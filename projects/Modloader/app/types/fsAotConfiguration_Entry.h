#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry__Class.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry__Boxed.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry__Array.h>

namespace app::classes::types {
    namespace fsAotConfiguration_Entry {
        inline app::fsAotConfiguration_Entry__Class** type_info = (app::fsAotConfiguration_Entry__Class**)(modloader::win::memory::resolve_rva(0x04701648));
        inline app::fsAotConfiguration_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotConfiguration_Entry__Class>(type_info, "FullSerializer", "fsAotConfiguration", "Entry");
        }
        inline app::fsAotConfiguration_Entry* create() {
            return il2cpp::create_object<app::fsAotConfiguration_Entry>(get_class());
        }
        inline app::fsAotConfiguration_Entry__Boxed* box(app::fsAotConfiguration_Entry value) {
            return il2cpp::box_value<app::fsAotConfiguration_Entry__Boxed>(get_class(), value);
        }
        inline app::fsAotConfiguration_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::fsAotConfiguration_Entry__Array>(get_class(), size);
        }
        inline app::fsAotConfiguration_Entry__Array* create_array(const std::vector<app::fsAotConfiguration_Entry>& items) {
            return il2cpp::array_new<app::fsAotConfiguration_Entry__Array>(get_class(), items);
        }
    } // namespace fsAotConfiguration_Entry
} // namespace app::classes::types
