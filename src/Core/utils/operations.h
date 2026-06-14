#pragma once

#include <Core/macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MoonGuid.h>

CORE_DLLEXPORT bool operator==(const app::Vector3& c1, const app::Vector3& c2);
CORE_DLLEXPORT bool operator!=(const app::Vector3& c1, const app::Vector3& c2);

CORE_DLLEXPORT bool operator==(const app::Color& c1, const app::Color& c2);
CORE_DLLEXPORT bool operator!=(const app::Color& c1, const app::Color& c2);

CORE_DLLEXPORT bool operator==(const app::MoonGuid& a, const app::MoonGuid& b);