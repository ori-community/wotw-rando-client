#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapPins_Pin {
        inline app::GameMapPins_Pin__Class** type_info = (app::GameMapPins_Pin__Class**)(modloader::win::memory::resolve_rva(0x04743ED8));
        inline app::GameMapPins_Pin__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapPins_Pin__Class>(type_info, "", "GameMapPins", "Pin");
        }
        inline app::GameMapPins_Pin* create() {
            return il2cpp::create_object<app::GameMapPins_Pin>(get_class());
        }
        inline app::GameMapPins_Pin__Array* create_array(int size) {
            return il2cpp::array_new<app::GameMapPins_Pin__Array>(get_class(), size);
        }
        inline app::GameMapPins_Pin__Array* create_array(const std::vector<app::GameMapPins_Pin*>& items) {
            return il2cpp::array_new<app::GameMapPins_Pin__Array>(get_class(), items);
        }
    } // namespace GameMapPins_Pin
} // namespace app::classes::types
