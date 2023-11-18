#pragma once
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#include <Modloader/app/structs/RuntimeConstructorInfo__Array.h>
#include <Modloader/app/structs/RuntimeConstructorInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeConstructorInfo {
        inline app::RuntimeConstructorInfo__Class** type_info() {
            static app::RuntimeConstructorInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeConstructorInfo__Class**)(modloader::win::memory::resolve_rva(0x0473A238));
            }
            return cache;
        }
        inline app::RuntimeConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeConstructorInfo__Class>(type_info(), "System.Reflection", "RuntimeConstructorInfo");
        }
        inline app::RuntimeConstructorInfo* create() {
            return il2cpp::create_object<app::RuntimeConstructorInfo>(get_class());
        }
        inline app::RuntimeConstructorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeConstructorInfo__Array>(get_class(), size);
        }
        inline app::RuntimeConstructorInfo__Array* create_array(const std::vector<app::RuntimeConstructorInfo*>& items) {
            return il2cpp::array_new<app::RuntimeConstructorInfo__Array>(get_class(), items);
        }
    } // namespace RuntimeConstructorInfo
} // namespace app::classes::types
