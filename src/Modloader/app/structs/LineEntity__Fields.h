#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineEntity__Fields_DEFINED)
#include <Modloader/app/structs/Entity_1__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Entity_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LineEntity__Fields_DEFINED
struct LineEntity__Fields {
    struct Entity_1__Fields _;
    struct Vector3 Start;
    struct Vector3 End;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LineEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LineEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LineEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
