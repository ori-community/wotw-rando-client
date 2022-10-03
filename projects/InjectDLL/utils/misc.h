#pragma once

#include <Il2CppModLoader/app/methods/UnityEngine/Object.h>


using namespace app::classes;

namespace utils {

    template <typename T>
    struct ObjectReference {
        T* ptr = nullptr;
        int object_id = 0;

        bool is_valid() {
            return
                    il2cpp::unity::is_valid(ptr) &&
                    il2cpp::is_assignable(ptr, "UnityEngine", "Object") &&
                    UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(ptr)) == object_id;
        }

        void set_reference(T* reference_ptr) {
            ptr = reference_ptr;
            object_id = UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(ptr));
        }
    };

    void set_color(app::GameObject* go, app::Color& color, app::UberShaderProperty_Color__Enum shader_property = app::UberShaderProperty_Color__Enum::MainColor, bool skip_first = false);
    app::MoonGuid* moon_guid(int a, int b, int c, int d);

    app::UberShaderColor* uber_shader_color(app::Color& color);
}
