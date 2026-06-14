#pragma once
#include <Modloader/app/structs/EtwSession.h>
#include <Modloader/app/structs/EtwSession__Array.h>
#include <Modloader/app/structs/EtwSession__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EtwSession {
        inline app::EtwSession__Class** type_info() {
            static app::EtwSession__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EtwSession__Class**)(modloader::win::memory::resolve_rva(0x04787BF0));
            }
            return cache;
        }
        inline app::EtwSession__Class* get_class() {
            return il2cpp::get_class<app::EtwSession__Class>(type_info(), "System.Diagnostics.Tracing", "EtwSession");
        }
        inline app::EtwSession* create() {
            return il2cpp::create_object<app::EtwSession>(get_class());
        }
        inline app::EtwSession__Array* create_array(int size) {
            return il2cpp::array_new<app::EtwSession__Array>(get_class(), size);
        }
        inline app::EtwSession__Array* create_array(const std::vector<app::EtwSession*>& items) {
            return il2cpp::array_new<app::EtwSession__Array>(get_class(), items);
        }
    } // namespace EtwSession
} // namespace app::classes::types
