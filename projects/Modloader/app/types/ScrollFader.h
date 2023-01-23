#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScrollFader__Class.h>
#include <Modloader/app/structs/ScrollFader.h>

namespace app::classes::types {
    namespace ScrollFader {
        namespace {
            inline app::ScrollFader__Class* type_info_ref = nullptr;
        }
        inline app::ScrollFader__Class** type_info = &type_info_ref;
        inline app::ScrollFader__Class* get_class() {
            return il2cpp::get_class<app::ScrollFader__Class>(type_info, "", "ScrollFader");
        }
        inline app::ScrollFader* create() {
            return il2cpp::create_object<app::ScrollFader>(get_class());
        }
    } // namespace ScrollFader
} // namespace app::classes::types
