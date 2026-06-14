#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_DEFINED
struct Object;
struct TimedActionSequence;
struct IContext;
struct TimedActionExecuter;
struct __declspec(align(8)) TimedActionSequence_RunSequence_d_23__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct TimedActionSequence* __4__this;
    struct IContext* context;
    int32_t _i_5__2;
    struct TimedActionExecuter* _timedActionExecuter_5__3;
};
#endif
#if !defined(IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_FWDDECL
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimedActionExecuter.h>
#include <Modloader/app/structs/TimedActionSequence.h>
#endif
#undef IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimedActionSequence_RunSequence_d_23__Fields_FWDDECL)
#include <Modloader/app/structs/TimedActionSequence_RunSequence_d_23__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedActionSequence_RunSequence_d_23__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
