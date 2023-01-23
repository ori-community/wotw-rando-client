#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecorderTester__Class.h>
#include <Modloader/app/structs/RecorderTester.h>

namespace app::classes::types {
    namespace RecorderTester {
        namespace {
            inline app::RecorderTester__Class* type_info_ref = nullptr;
        }
        inline app::RecorderTester__Class** type_info = &type_info_ref;
        inline app::RecorderTester__Class* get_class() {
            return il2cpp::get_class<app::RecorderTester__Class>(type_info, "", "RecorderTester");
        }
        inline app::RecorderTester* create() {
            return il2cpp::create_object<app::RecorderTester>(get_class());
        }
    } // namespace RecorderTester
} // namespace app::classes::types
