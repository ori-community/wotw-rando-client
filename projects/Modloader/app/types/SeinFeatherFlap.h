#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFeatherFlap__Class.h>
#include <Modloader/app/structs/SeinFeatherFlap.h>

namespace app::classes::types {
    namespace SeinFeatherFlap {
        namespace {
            inline app::SeinFeatherFlap__Class* type_info_ref = nullptr;
        }
        inline app::SeinFeatherFlap__Class** type_info = &type_info_ref;
        inline app::SeinFeatherFlap__Class* get_class() {
            return il2cpp::get_class<app::SeinFeatherFlap__Class>(type_info, "", "SeinFeatherFlap");
        }
        inline app::SeinFeatherFlap* create() {
            return il2cpp::create_object<app::SeinFeatherFlap>(get_class());
        }
    } // namespace SeinFeatherFlap
} // namespace app::classes::types
