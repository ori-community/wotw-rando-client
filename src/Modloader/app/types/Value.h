#pragma once
#include <Modloader/app/structs/Value.h>
#include <Modloader/app/structs/Value__Array.h>
#include <Modloader/app/structs/Value__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Value {
        inline app::Value__Class** type_info() {
            static app::Value__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Value__Class**)(modloader::win::memory::resolve_rva(0x04729A30));
            }
            return cache;
        }
        inline app::Value__Class* get_class() {
            return il2cpp::get_class<app::Value__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Value");
        }
        inline app::Value* create() {
            return il2cpp::create_object<app::Value>(get_class());
        }
        inline app::Value__Array* create_array(int size) {
            return il2cpp::array_new<app::Value__Array>(get_class(), size);
        }
        inline app::Value__Array* create_array(const std::vector<app::Value*>& items) {
            return il2cpp::array_new<app::Value__Array>(get_class(), items);
        }
    } // namespace Value
} // namespace app::classes::types
