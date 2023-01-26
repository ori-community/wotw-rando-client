#pragma once
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#include <Modloader/app/structs/RuntimeMethodInfo__Array.h>
#include <Modloader/app/structs/RuntimeMethodInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeMethodInfo {
        inline app::RuntimeMethodInfo__Class** type_info() {
            static app::RuntimeMethodInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeMethodInfo__Class**)(modloader::win::memory::resolve_rva(0x04761938));
            }
            return cache;
        }
        inline app::RuntimeMethodInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeMethodInfo__Class>(type_info(), "System.Reflection", "RuntimeMethodInfo");
        }
        inline app::RuntimeMethodInfo* create() {
            return il2cpp::create_object<app::RuntimeMethodInfo>(get_class());
        }
        inline app::RuntimeMethodInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeMethodInfo__Array>(get_class(), size);
        }
        inline app::RuntimeMethodInfo__Array* create_array(const std::vector<app::RuntimeMethodInfo*>& items) {
            return il2cpp::array_new<app::RuntimeMethodInfo__Array>(get_class(), items);
        }
    } // namespace RuntimeMethodInfo
} // namespace app::classes::types
