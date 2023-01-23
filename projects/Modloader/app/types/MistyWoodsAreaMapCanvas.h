#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas__Class.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas.h>

namespace app::classes::types {
    namespace MistyWoodsAreaMapCanvas {
        namespace {
            inline app::MistyWoodsAreaMapCanvas__Class* type_info_ref = nullptr;
        }
        inline app::MistyWoodsAreaMapCanvas__Class** type_info = &type_info_ref;
        inline app::MistyWoodsAreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsAreaMapCanvas__Class>(type_info, "", "MistyWoodsAreaMapCanvas");
        }
        inline app::MistyWoodsAreaMapCanvas* create() {
            return il2cpp::create_object<app::MistyWoodsAreaMapCanvas>(get_class());
        }
    } // namespace MistyWoodsAreaMapCanvas
} // namespace app::classes::types
