#pragma once
#include <Modloader/app/structs/IMapping.h>
#include <Modloader/app/structs/IMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMapping {
        inline app::IMapping__Class** type_info() {
            static app::IMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMapping__Class**)(modloader::win::memory::resolve_rva(0x047350D0));
            }
            return cache;
        }
        inline app::IMapping__Class* get_class() {
            return il2cpp::get_class<app::IMapping__Class>(type_info(), "", "IMapping");
        }
    } // namespace IMapping
} // namespace app::classes::types
