#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinPinned__Class.h>
#include <Modloader/app/structs/SeinPinned.h>

namespace app::classes::types {
    namespace SeinPinned {
        namespace {
            inline app::SeinPinned__Class* type_info_ref = nullptr;
        }
        inline app::SeinPinned__Class** type_info = &type_info_ref;
        inline app::SeinPinned__Class* get_class() {
            return il2cpp::get_class<app::SeinPinned__Class>(type_info, "", "SeinPinned");
        }
        inline app::SeinPinned* create() {
            return il2cpp::create_object<app::SeinPinned>(get_class());
        }
    } // namespace SeinPinned
} // namespace app::classes::types
