#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SlugHitBehaviour__Class.h>
#include <Modloader/app/structs/SlugHitBehaviour.h>

namespace app::classes::types {
    namespace SlugHitBehaviour {
        namespace {
            inline app::SlugHitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SlugHitBehaviour__Class** type_info = &type_info_ref;
        inline app::SlugHitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugHitBehaviour__Class>(type_info, "", "SlugHitBehaviour");
        }
        inline app::SlugHitBehaviour* create() {
            return il2cpp::create_object<app::SlugHitBehaviour>(get_class());
        }
    } // namespace SlugHitBehaviour
} // namespace app::classes::types
