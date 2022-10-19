#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameCaptureTester_StringBuilderScope {
        namespace {
            inline app::FrameCaptureTester_StringBuilderScope__Class* type_info_ref = nullptr;
        }
        inline app::FrameCaptureTester_StringBuilderScope__Class** type_info = &type_info_ref;
        inline app::FrameCaptureTester_StringBuilderScope__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_StringBuilderScope__Class>(type_info, "", "FrameCaptureTester", "StringBuilderScope");
        }
        inline app::FrameCaptureTester_StringBuilderScope* create() {
            return il2cpp::create_object<app::FrameCaptureTester_StringBuilderScope>(get_class());
        }
        inline app::FrameCaptureTester_StringBuilderScope__Boxed* box(app::FrameCaptureTester_StringBuilderScope value) {
            return il2cpp::box_value<app::FrameCaptureTester_StringBuilderScope__Boxed>(get_class(), value);
        }
    } // namespace FrameCaptureTester_StringBuilderScope
} // namespace app::classes::types
