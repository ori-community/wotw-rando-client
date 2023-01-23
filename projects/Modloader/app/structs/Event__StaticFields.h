#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Event__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Event__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Event__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Event__StaticFields_DEFINED
struct Event;
struct Dictionary_2_System_String_System_Int32_;
struct Event__StaticFields {
    struct Event* s_Current;
    struct Event* s_MasterEvent;
    struct Dictionary_2_System_String_System_Int32_* __f__switch_map0;
};
#endif
#if !defined(IL2CPP_STRUCT_Event__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Event__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Event.h>
#endif
#undef IL2CPP_STRUCT_Event__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Event__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Event__StaticFields_FWDDECL)
#include <Modloader/app/structs/Event__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Event__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
