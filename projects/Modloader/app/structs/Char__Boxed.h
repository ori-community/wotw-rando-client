#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Char__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Char__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Char__Boxed_DEFINED)
#define IL2CPP_STRUCT_Char__Boxed_DEFINED
struct Char__Class;
struct Char__Boxed {
    struct Char__Class* klass;
    MonitorData* monitor;
    uint16_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Char__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Char__Boxed_FWDDECL
#include <Modloader/app/structs/Char__Class.h>
#endif
#undef IL2CPP_STRUCT_Char__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Char__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Char__Boxed_FWDDECL)
#include <Modloader/app/structs/Char__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Char__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
