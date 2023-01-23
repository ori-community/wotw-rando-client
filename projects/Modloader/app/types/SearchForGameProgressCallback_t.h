#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SearchForGameProgressCallback_t__Class.h>
#include <Modloader/app/structs/SearchForGameProgressCallback_t.h>
#include <Modloader/app/structs/SearchForGameProgressCallback_t__Boxed.h>

namespace app::classes::types {
    namespace SearchForGameProgressCallback_t {
        namespace {
            inline app::SearchForGameProgressCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::SearchForGameProgressCallback_t__Class** type_info = &type_info_ref;
        inline app::SearchForGameProgressCallback_t__Class* get_class() {
            return il2cpp::get_class<app::SearchForGameProgressCallback_t__Class>(type_info, "Steamworks", "SearchForGameProgressCallback_t");
        }
        inline app::SearchForGameProgressCallback_t* create() {
            return il2cpp::create_object<app::SearchForGameProgressCallback_t>(get_class());
        }
        inline app::SearchForGameProgressCallback_t__Boxed* box(app::SearchForGameProgressCallback_t value) {
            return il2cpp::box_value<app::SearchForGameProgressCallback_t__Boxed>(get_class(), value);
        }
    } // namespace SearchForGameProgressCallback_t
} // namespace app::classes::types
