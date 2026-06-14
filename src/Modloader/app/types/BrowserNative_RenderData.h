#pragma once
#include <Modloader/app/structs/BrowserNative_RenderData.h>
#include <Modloader/app/structs/BrowserNative_RenderData__Boxed.h>
#include <Modloader/app/structs/BrowserNative_RenderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_RenderData {
        inline app::BrowserNative_RenderData__Class** type_info() {
            static app::BrowserNative_RenderData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserNative_RenderData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserNative_RenderData__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_RenderData__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "RenderData");
        }
        inline app::BrowserNative_RenderData* create() {
            return il2cpp::create_object<app::BrowserNative_RenderData>(get_class());
        }
        inline app::BrowserNative_RenderData__Boxed* box(app::BrowserNative_RenderData value) {
            return il2cpp::box_value<app::BrowserNative_RenderData__Boxed>(get_class(), value);
        }
    } // namespace BrowserNative_RenderData
} // namespace app::classes::types
