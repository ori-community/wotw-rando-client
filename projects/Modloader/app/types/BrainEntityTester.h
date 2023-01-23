#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrainEntityTester__Class.h>
#include <Modloader/app/structs/BrainEntityTester.h>

namespace app::classes::types {
    namespace BrainEntityTester {
        namespace {
            inline app::BrainEntityTester__Class* type_info_ref = nullptr;
        }
        inline app::BrainEntityTester__Class** type_info = &type_info_ref;
        inline app::BrainEntityTester__Class* get_class() {
            return il2cpp::get_class<app::BrainEntityTester__Class>(type_info, "", "BrainEntityTester");
        }
        inline app::BrainEntityTester* create() {
            return il2cpp::create_object<app::BrainEntityTester>(get_class());
        }
    } // namespace BrainEntityTester
} // namespace app::classes::types
