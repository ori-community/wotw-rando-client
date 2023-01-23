#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderlingPlaceholder__Class.h>
#include <Modloader/app/structs/SpiderlingPlaceholder.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholder {
        namespace {
            inline app::SpiderlingPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiderlingPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholder__Class>(type_info, "", "SpiderlingPlaceholder");
        }
        inline app::SpiderlingPlaceholder* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholder>(get_class());
        }
    } // namespace SpiderlingPlaceholder
} // namespace app::classes::types
