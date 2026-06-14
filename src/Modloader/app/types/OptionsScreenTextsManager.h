#pragma once
#include <Modloader/app/structs/OptionsScreenTextsManager.h>
#include <Modloader/app/structs/OptionsScreenTextsManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionsScreenTextsManager {
        inline app::OptionsScreenTextsManager__Class** type_info() {
            static app::OptionsScreenTextsManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OptionsScreenTextsManager__Class**)(modloader::win::memory::resolve_rva(0x04719D80));
            }
            return cache;
        }
        inline app::OptionsScreenTextsManager__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenTextsManager__Class>(type_info(), "", "OptionsScreenTextsManager");
        }
        inline app::OptionsScreenTextsManager* create() {
            return il2cpp::create_object<app::OptionsScreenTextsManager>(get_class());
        }
    } // namespace OptionsScreenTextsManager
} // namespace app::classes::types
