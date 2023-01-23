#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinKeystonesFloatProvider__Class.h>
#include <Modloader/app/structs/SeinKeystonesFloatProvider.h>

namespace app::classes::types {
    namespace SeinKeystonesFloatProvider {
        namespace {
            inline app::SeinKeystonesFloatProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinKeystonesFloatProvider__Class** type_info = &type_info_ref;
        inline app::SeinKeystonesFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinKeystonesFloatProvider__Class>(type_info, "", "SeinKeystonesFloatProvider");
        }
        inline app::SeinKeystonesFloatProvider* create() {
            return il2cpp::create_object<app::SeinKeystonesFloatProvider>(get_class());
        }
    } // namespace SeinKeystonesFloatProvider
} // namespace app::classes::types
