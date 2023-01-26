#pragma once
#include <Modloader/app/structs/RuntimePropertyInfo.h>
#include <Modloader/app/structs/RuntimePropertyInfo__Array.h>
#include <Modloader/app/structs/RuntimePropertyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimePropertyInfo {
        inline app::RuntimePropertyInfo__Class** type_info() {
            static app::RuntimePropertyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimePropertyInfo__Class**)(modloader::win::memory::resolve_rva(0x0470E248));
            }
            return cache;
        }
        inline app::RuntimePropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyInfo__Class>(type_info(), "System.Reflection", "RuntimePropertyInfo");
        }
        inline app::RuntimePropertyInfo* create() {
            return il2cpp::create_object<app::RuntimePropertyInfo>(get_class());
        }
        inline app::RuntimePropertyInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), size);
        }
        inline app::RuntimePropertyInfo__Array* create_array(const std::vector<app::RuntimePropertyInfo*>& items) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), items);
        }
    } // namespace RuntimePropertyInfo
} // namespace app::classes::types
