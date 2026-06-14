#pragma once
#include <Modloader/app/structs/Ucs4Encoding4321.h>
#include <Modloader/app/structs/Ucs4Encoding4321__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding4321 {
        inline app::Ucs4Encoding4321__Class** type_info() {
            static app::Ucs4Encoding4321__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ucs4Encoding4321__Class**)(modloader::win::memory::resolve_rva(0x04799210));
            }
            return cache;
        }
        inline app::Ucs4Encoding4321__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding4321__Class>(type_info(), "System.Xml", "Ucs4Encoding4321");
        }
        inline app::Ucs4Encoding4321* create() {
            return il2cpp::create_object<app::Ucs4Encoding4321>(get_class());
        }
    } // namespace Ucs4Encoding4321
} // namespace app::classes::types
