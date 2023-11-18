#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataProviderTest3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataProviderTest3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest3__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DataProviderTest3__Fields_DEFINED
struct DynamicDataResolver;
struct GameObject;
struct String;
struct InterfaceTest;
struct DataProviderTest3__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct GameObject* GameObjectToExpose;
    struct Vector3 Vector3ToExpose;
    struct String* StringToExpose;
    int32_t IntToExpose;
    struct InterfaceTest* ExposedInterfaceTest;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataProviderTest3__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataProviderTest3__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InterfaceTest.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataProviderTest3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataProviderTest3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataProviderTest3__Fields_FWDDECL)
#include <Modloader/app/structs/DataProviderTest3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataProviderTest3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
