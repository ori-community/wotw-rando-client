#pragma once
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/ConstructorInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructorInfo {
        inline app::ConstructorInfo__Class** type_info() {
            static app::ConstructorInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructorInfo__Class**)(modloader::win::memory::resolve_rva(0x0473B450));
            }
            return cache;
        }
        inline app::ConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::ConstructorInfo__Class>(type_info(), "System.Reflection", "ConstructorInfo");
        }
        inline app::ConstructorInfo* create() {
            return il2cpp::create_object<app::ConstructorInfo>(get_class());
        }
        inline app::ConstructorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstructorInfo__Array>(get_class(), size);
        }
        inline app::ConstructorInfo__Array* create_array(const std::vector<app::ConstructorInfo*>& items) {
            return il2cpp::array_new<app::ConstructorInfo__Array>(get_class(), items);
        }
    } // namespace ConstructorInfo
} // namespace app::classes::types
