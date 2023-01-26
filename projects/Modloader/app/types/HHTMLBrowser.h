#pragma once
#include <Modloader/app/structs/HHTMLBrowser.h>
#include <Modloader/app/structs/HHTMLBrowser__Boxed.h>
#include <Modloader/app/structs/HHTMLBrowser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HHTMLBrowser {
        inline app::HHTMLBrowser__Class** type_info() {
            static app::HHTMLBrowser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HHTMLBrowser__Class**)(modloader::win::memory::resolve_rva(0x04756660));
            }
            return cache;
        }
        inline app::HHTMLBrowser__Class* get_class() {
            return il2cpp::get_class<app::HHTMLBrowser__Class>(type_info(), "Steamworks", "HHTMLBrowser");
        }
        inline app::HHTMLBrowser* create() {
            return il2cpp::create_object<app::HHTMLBrowser>(get_class());
        }
        inline app::HHTMLBrowser__Boxed* box(app::HHTMLBrowser value) {
            return il2cpp::box_value<app::HHTMLBrowser__Boxed>(get_class(), value);
        }
    } // namespace HHTMLBrowser
} // namespace app::classes::types
