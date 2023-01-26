#pragma once
#include <Modloader/app/structs/Converter.h>
#include <Modloader/app/structs/Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Converter {
        inline app::Converter__Class** type_info() {
            static app::Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Converter__Class**)(modloader::win::memory::resolve_rva(0x0470AC18));
            }
            return cache;
        }
        inline app::Converter__Class* get_class() {
            return il2cpp::get_class<app::Converter__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "Converter");
        }
        inline app::Converter* create() {
            return il2cpp::create_object<app::Converter>(get_class());
        }
    } // namespace Converter
} // namespace app::classes::types
