#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>

namespace
{
    struct BoundingRect
    {
        float left, right, bottom, top, front, back;
    };

    bool in_rect(BoundingRect const& rect, float x, float y, float z)
    {
        return !(
            x < rect.left ||
            x > rect.right ||
            y < rect.bottom ||
            y > rect.top ||
            z < rect.front ||
            z > rect.back
        );
    }

    const BoundingRect goal_rect = {
        0.0f,
        0.0f,
        0.0f,
        0.0f,
        0.0f,
        0.0f
    };

    BINDING(10971216, UnityEngine_Vector3_o, SeinCharacter__get_Position, (SeinCharacter_o* thisPtr));
    BINDING(10971312, void, SeinCharacter__set_Position, (SeinCharacter_o* thisPtr, UnityEngine_Vector3_o value));
}

//No it's not KeystoneDoor
INTERCEPT(17948416, void, SeinCharacter__FixedUpdate, (SeinCharacter_o* this_ptr), {
    //auto position = SeinCharacter__get_Position(get_sein());
    //position.x = 0.0f;
    //position.y = 0.0f;
    //position.z = 0.0f;
    //SeinCharacter__set_Position(get_sein(), position);
})
