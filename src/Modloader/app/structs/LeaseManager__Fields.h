#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaseManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaseManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseManager__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaseManager__Fields_DEFINED
struct ArrayList;
struct Timer;
struct __declspec(align(8)) LeaseManager__Fields {
    struct ArrayList* _objects;
    struct Timer* _timer;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaseManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaseManager__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Timer.h>
#endif
#undef IL2CPP_STRUCT_LeaseManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaseManager__Fields_FWDDECL)
#include <Modloader/app/structs/LeaseManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaseManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
