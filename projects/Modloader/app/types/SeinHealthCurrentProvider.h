#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinHealthCurrentProvider__Class.h>
#include <Modloader/app/structs/SeinHealthCurrentProvider.h>

namespace app::classes::types {
    namespace SeinHealthCurrentProvider {
        namespace {
            inline app::SeinHealthCurrentProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinHealthCurrentProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthCurrentProvider__Class>(type_info, "", "SeinHealthCurrentProvider");
        }
        inline app::SeinHealthCurrentProvider* create() {
            return il2cpp::create_object<app::SeinHealthCurrentProvider>(get_class());
        }
    } // namespace SeinHealthCurrentProvider
} // namespace app::classes::types
