#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonReference_1_Moon_InteractionGraph_IInteractionNode_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0478C8C8, MoonReference_1_Moon_InteractionGraph_IInteractionNode__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IInteractionNode *, Resolve, (app::MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0472B830, MoonReference_1_Moon_InteractionGraph_IInteractionNode__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::IInteractionNode *, SafeResolve, (app::MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04788088, MoonReference_1_Moon_InteractionGraph_IInteractionNode__SafeResolve__MethodInfo)
}
