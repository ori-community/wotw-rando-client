#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RandomObjectGenerator__Class.h>
#include <Modloader/app/structs/RandomObjectGenerator.h>

namespace app::classes::types {
    namespace RandomObjectGenerator {
        namespace {
            inline app::RandomObjectGenerator__Class* type_info_ref = nullptr;
        }
        inline app::RandomObjectGenerator__Class** type_info = &type_info_ref;
        inline app::RandomObjectGenerator__Class* get_class() {
            return il2cpp::get_class<app::RandomObjectGenerator__Class>(type_info, "", "RandomObjectGenerator");
        }
        inline app::RandomObjectGenerator* create() {
            return il2cpp::create_object<app::RandomObjectGenerator>(get_class());
        }
    } // namespace RandomObjectGenerator
} // namespace app::classes::types
