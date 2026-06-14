#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ResourceManager__StaticFields_DEFINED
struct Type;
struct String;
struct ResourceManager__StaticFields {
    int32_t MagicNumber;
    int32_t HeaderVersionNumber;
    struct Type* _minResourceSet;
    struct String* ResReaderTypeName;
    struct String* ResSetTypeName;
    struct String* MscorlibName;
    int32_t DEBUG;
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ResourceManager__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ResourceManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ResourceManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/ResourceManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
