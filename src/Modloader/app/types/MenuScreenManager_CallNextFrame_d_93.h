#pragma once
#include <Modloader/app/structs/MenuScreenManager_CallNextFrame_d_93.h>
#include <Modloader/app/structs/MenuScreenManager_CallNextFrame_d_93__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_CallNextFrame_d_93 {
        inline app::MenuScreenManager_CallNextFrame_d_93__Class** type_info() {
            static app::MenuScreenManager_CallNextFrame_d_93__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuScreenManager_CallNextFrame_d_93__Class**)(modloader::win::memory::resolve_rva(0x047435D0));
            }
            return cache;
        }
        inline app::MenuScreenManager_CallNextFrame_d_93__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_CallNextFrame_d_93__Class>(type_info(), "", "MenuScreenManager", "<CallNextFrame>d__93");
        }
        inline app::MenuScreenManager_CallNextFrame_d_93* create() {
            return il2cpp::create_object<app::MenuScreenManager_CallNextFrame_d_93>(get_class());
        }
    } // namespace MenuScreenManager_CallNextFrame_d_93
} // namespace app::classes::types
