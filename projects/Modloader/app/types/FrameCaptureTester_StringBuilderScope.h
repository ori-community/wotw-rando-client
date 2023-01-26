#pragma once
#include <Modloader/app/structs/FrameCaptureTester_StringBuilderScope.h>
#include <Modloader/app/structs/FrameCaptureTester_StringBuilderScope__Boxed.h>
#include <Modloader/app/structs/FrameCaptureTester_StringBuilderScope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester_StringBuilderScope {
        inline app::FrameCaptureTester_StringBuilderScope__Class** type_info() {
            static app::FrameCaptureTester_StringBuilderScope__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameCaptureTester_StringBuilderScope__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameCaptureTester_StringBuilderScope__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_StringBuilderScope__Class>(type_info(), "", "FrameCaptureTester", "StringBuilderScope");
        }
        inline app::FrameCaptureTester_StringBuilderScope* create() {
            return il2cpp::create_object<app::FrameCaptureTester_StringBuilderScope>(get_class());
        }
        inline app::FrameCaptureTester_StringBuilderScope__Boxed* box(app::FrameCaptureTester_StringBuilderScope value) {
            return il2cpp::box_value<app::FrameCaptureTester_StringBuilderScope__Boxed>(get_class(), value);
        }
    } // namespace FrameCaptureTester_StringBuilderScope
} // namespace app::classes::types
