#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyHandler__Fields_DEFINED
struct String;
struct Hashtable;
struct __declspec(align(8)) KeyHandler__Fields {
    struct String* Dir;
    struct String* ActualDir;
    bool IsVolatile;
    struct Hashtable* values;
    struct String* file;
    bool dirty;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeyHandler__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_KeyHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeyHandler__Fields_FWDDECL)
#include <Modloader/app/structs/KeyHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
