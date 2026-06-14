#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XObject__Fields_DEFINED
struct XContainer;
struct Object;
struct __declspec(align(8)) XObject__Fields {
    struct XContainer* parent;
    struct Object* annotations;
};
#endif
#if !defined(IL2CPP_STRUCT_XObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_XObject__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XContainer.h>
#endif
#undef IL2CPP_STRUCT_XObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XObject__Fields_FWDDECL)
#include <Modloader/app/structs/XObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
