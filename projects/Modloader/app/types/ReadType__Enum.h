#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReadType__Enum__Class.h>
#include <Modloader/app/structs/ReadType__Enum.h>
#include <Modloader/app/structs/ReadType__Enum__Array.h>

namespace app::classes::types {
    namespace ReadType__Enum {
        namespace {
            inline app::ReadType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReadType__Enum__Class** type_info = &type_info_ref;
        inline app::ReadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReadType__Enum__Class>(type_info, "Newtonsoft.Json", "ReadType");
        }
        inline app::ReadType__Enum* create() {
            return il2cpp::create_object<app::ReadType__Enum>(get_class());
        }
        inline app::ReadType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadType__Enum__Array>(get_class(), size);
        }
        inline app::ReadType__Enum__Array* create_array(const std::vector<app::ReadType__Enum*>& items) {
            return il2cpp::array_new<app::ReadType__Enum__Array>(get_class(), items);
        }
    } // namespace ReadType__Enum
} // namespace app::classes::types
