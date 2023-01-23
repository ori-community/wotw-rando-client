#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderlingPlaceholderMarker__Class.h>
#include <Modloader/app/structs/SpiderlingPlaceholderMarker.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholderMarker {
        namespace {
            inline app::SpiderlingPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SpiderlingPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholderMarker__Class>(type_info, "", "SpiderlingPlaceholderMarker");
        }
        inline app::SpiderlingPlaceholderMarker* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholderMarker>(get_class());
        }
    } // namespace SpiderlingPlaceholderMarker
} // namespace app::classes::types
