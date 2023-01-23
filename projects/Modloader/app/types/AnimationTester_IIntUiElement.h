#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationTester_IIntUiElement__Class.h>

namespace app::classes::types {
    namespace AnimationTester_IIntUiElement {
        inline app::AnimationTester_IIntUiElement__Class** type_info = (app::AnimationTester_IIntUiElement__Class**)(modloader::win::memory::resolve_rva(0x04786C00));
        inline app::AnimationTester_IIntUiElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IIntUiElement__Class>(type_info, "", "AnimationTester", "IIntUiElement");
        }
    } // namespace AnimationTester_IIntUiElement
} // namespace app::classes::types
