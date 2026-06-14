#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Convert__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Convert__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convert__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Convert__StaticFields_DEFINED
struct RuntimeType__Array;
struct RuntimeType;
struct Char__Array;
struct Object;
struct Convert__StaticFields {
    struct RuntimeType__Array* ConvertTypes;
    struct RuntimeType* EnumType;
    struct Char__Array* base64Table;
    struct Object* DBNull;
};
#endif
#if !defined(IL2CPP_STRUCT_Convert__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Convert__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/RuntimeType__Array.h>
#endif
#undef IL2CPP_STRUCT_Convert__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Convert__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Convert__StaticFields_FWDDECL)
#include <Modloader/app/structs/Convert__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Convert__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
